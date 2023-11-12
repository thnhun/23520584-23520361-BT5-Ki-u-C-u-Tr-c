#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
struct ngay
{
	int ng;
	int th;
	int nm;
};
typedef struct ngay NGAY;
void Nhap(NGAY&);
void Nhap(NGAY& x)
{
	cout << "Nhap ngay: ";
	cin >> x.ng;
	cout << "Nhap thang: ";
	cin >> x.th;
	cout << "Nhap nam: ";
	cin >> x.nm;
}
int SoSanh(NGAY, NGAY);
int SoSanh(NGAY x, NGAY y)
{
	if (x.nm > y.nm)
		return 1;
	if (x.nm < y.nm)
		return -1;
	if (x.th > y.th)
		return 1;
	if (x.th < y.th)
		return -1;
	if (x.ng > y.ng)
		return 1;
	if (x.ng < y.ng)
		return -1;
	return 0;
}
NGAY TimNgay(int);
NGAY TimNgay(int stt)
{
	int nam = 1;
	int sn = 365;
	while (stt - sn > 0)
	{
		stt = stt - sn;
		nam++;
		NGAY temp = { 1,1,nam };
		sn = SoNgayToiDaTrongNam(temp);
	}
	return TimNgay(nam, stt);
}
int SoNgayToiDaTrongNam(NGAY);
int SoNgayToiDaTrongNam(NGAY x)
{
	if (x.nm % 4 == 0 && x.nm % 100 != 0)
		return 366;
	if (x.nm % 400 == 0)
		return 366;
	return 365;

}
NGAY TimNgay(int, int);
NGAY TimNgay(int nam, int stt)
{
	NGAY temp = { 1,1,nam };
	temp.th = 1;
	while (stt - SoNgayToiDaTrongThang(temp) > 0)
	{
		stt = stt - SoNgayToiDaTrongThang(temp);
		temp.th++;
	}
	temp.ng = stt;
	return temp;
}
int SoNgayToiDaTrongThang(NGAY);
int SoNgayToiDaTrongThang(NGAY x)
{
	int ngaythang[12] = { 31, 28, 31, 30, 31, 30,
	31, 31, 30, 31, 30, 31 };
	if (ktNhuan(x))
		ngaythang[1] = 29;
	return ngaythang[x.th - 1];
}
int ktNhuan(NGAY);
int ktNhuan(NGAY x)
{
	if (x.nm % 4 == 0 && x.nm % 100 != 0)
		return 1;
	if (x.nm % 400 == 0)
		return 1;
	return 0;
}
int main()
{
	ngay A, B;
	int kq = SoSanh(A, B);
	cout << kq;
	return 0;
}