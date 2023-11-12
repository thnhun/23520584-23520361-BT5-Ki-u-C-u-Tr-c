#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct Ngay NGAY;

void Nhap(NGAY&);
void Xuat(NGAY);
NGAY TruocDo(NGAY, int);
int SoThuTu(NGAY);
int SoThuTuTrongNam(NGAY);
int SoNgayToiDaTrongNam(NGAY);
int SoNgayToiDaTrongThang(NGAY);
int ktNhuan(NGAY);

int main()
{
	NGAY A;
	cout << "\nNhap ngay la: ";
	Nhap(A);
	cout << "\nNgay da nhap la: ";
	Xuat(A);
	int k;
	cout << "Nhap so ngay muon tim truoc ngay da nhap : ";
	cin >> k;
	NGAY C = TruocDo(A, k);
	cout << "Ngay truoc ngay da nhap k ngay la : ";
	Xuat(C);
	return 0;
}
void Nhap(NGAY& x)
{
	cout << "\nNhap ngay: ";
	cin >> x.Ngay;
	cout << "Nhap thang: ";
	cin >> x.Thang;
	cout << "Nhap nam: ";
	cin >> x.Nam;
}

void Xuat(NGAY x)
{
	cout << "\nNgay:" << x.Ngay;
	cout << "\nThang:" << x.Thang;
	cout << "\nNam:" << x.Nam;
}

NGAY TruocDo(NGAY x, int k)
{
	int stt = SoThuTu(x);
	stt = stt - k;
	return TimNgay(stt);
}

NGAY TimNgay(int stt)
{
	int nam = 1;
	int sn = 365;
	while (stt - sn > 0)
	{
		stt -= sn;
		nam++;
		NGAY temp = { 1,1,nam };
		sn = SoNgayToiDaTrongNam(temp);
	}
	return TimNgay(nam, stt);
}

NGAY TimNgay(int nam, int stt)
{
	NGAY temp = { 1,1,nam };
	temp.Thang = 1;
	while (stt - SoNgayToiDaTrongThang(temp) > 0)
	{
		stt = stt - SoNgayToiDaTrongThang(temp);
		temp.Thang++;
	}
	temp.Ngay = stt;
	return temp;
}

int SoThuTu(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.Nam - 1; i++)
	{
		NGAY temp = { 1,1,i };
		stt = stt + SoNgayToiDaTrongNam(temp);
	}
	return (stt + SoThuTuTrongNam(x));
}

int SoThuTuTrongNam(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.Thang - 1; i++)
	{
		NGAY temp = { 1,i,x.Nam };
		stt += SoNgayToiDaTrongThang(temp);
	}
	return (stt + x.Ngay);
}

int SoNgayToiDaTrongNam(NGAY x)
{
	if (ktNhuan(x))
		return 366;
	return 365;
}

int SoNgayToiDaTrongThang(NGAY x)
{
	int ngaythang[12] = { 31, 28, 31, 30, 31, 30,31, 31, 30, 31, 30, 31 };
	if (ktNhuan(x))
	{
		ngaythang[1] = 29;
	}
	return ngaythang[x.Thang - 1];
}

int ktNhuan(NGAY x)
{
	if ((x.Nam % 4 == 0 && x.Nam % 100 != 0) || (x.Nam % 400 == 0))
		return 1;
	return 0;
}
