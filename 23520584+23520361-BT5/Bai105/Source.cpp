#include <iostream>
#include <iomanip>

using namespace std;

struct ngay
{
	int ng;
	int th;
	int nm;
};
typedef struct ngay NGAY;

void Nhap(NGAY &);
void Xuat(NGAY);
int ktNhuan(NGAY);
int SoNgayToiDaTrongNam(NGAY);
int SoThuTuTrongNam(NGAY);
int SoNgayToiDaTrongThang(NGAY);
int SoThuTu(NGAY);
NGAY TimNgay(int, int);
NGAY KeTiep(NGAY);

int main()
{
	NGAY d;
	Nhap(d);
	int stt = SoThuTuTrongNam(d);

	NGAY keTiep = KeTiep(d);

	Xuat(keTiep);

	return 0;
}

void Nhap(NGAY &x)
{
	cout << "Nhap ngay: ";
	cin >> x.ng;
	cout << "Nhap thang: ";
	cin >> x.th;
	cout << "Nhap nam: ";
	cin >> x.nm;
}

void Xuat(NGAY x)
{
	cout << "\nNgay: " << x.ng;
	cout << "\nThang: " << x.th;
	cout << "\nNam: " << x.nm;
}

int ktNhuan(NGAY x)
{
	if (x.nm % 4 == 0 && x.nm % 100 != 0)
		return 1;
	if (x.nm % 400 == 0)
		return 1;
	return 0;
}

int SoNgayToiDaTrongNam(NGAY x)
{
	if (ktNhuan(x))
		return 366;
	return 365;
}

int SoThuTuTrongNam(NGAY x)
{
	int stt = 0;

	for (int i = 1; i < x.th; i++)
	{
		NGAY temp = {1, i, x.nm};
		stt += SoNgayToiDaTrongThang(temp);
	}

	return (stt + x.ng);
}

int SoNgayToiDaTrongThang(NGAY x)
{
	int ngaythang[12] = {31, 28, 31, 30, 31, 30,
						 31, 31, 30, 31, 30, 31};

	if (ktNhuan(x))
		ngaythang[1] = 29;

	return ngaythang[x.th - 1];
}

int SoThuTu(NGAY x)
{
	int stt = 0;

	for (int i = 1; i <= x.th - 1; i++)
	{
		NGAY temp = {1, i, x.nm};
		stt = stt + SoNgayToiDaTrongThang(temp);
	}

	return (stt + x.ng);
}

NGAY TimNgay(int nam, int stt)
{
	int sn = SoNgayToiDaTrongNam({1, 1, nam});

	while (stt > sn)
	{
		stt = stt - sn;
		nam++;
		NGAY temp = {1, 1, nam};
		sn = SoNgayToiDaTrongNam(temp);
	}

	NGAY result = {1, 1, nam};

	for (int i = 1; i <= 12; i++)
	{
		int daysInMonth = SoNgayToiDaTrongThang({1, i, nam});
		if (stt <= daysInMonth)
		{
			result.ng = stt;
			result.th = i;
			break;
		}
		stt -= daysInMonth;
	}

	return result;
}

NGAY KeTiep(NGAY x)
{
	int stt = SoThuTu(x);
	stt = stt + 1;
	return TimNgay(x.nm, stt);
}
