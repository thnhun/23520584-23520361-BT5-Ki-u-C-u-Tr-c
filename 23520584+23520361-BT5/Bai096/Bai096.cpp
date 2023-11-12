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
int SoNgayToiDaTrongNam(NGAY);

int main()
{
	NGAY A;
	cout << "\nNhap ngay la: " << endl;
	Nhap(A);
	cout << "\nNgay la: ";
	Xuat(A);
	cout << "So ngay toi da trong nam da nhap la : " << SoNgayToiDaTrongNam(A);
	return 1;
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

int ktNhuan(NGAY x)
{
	if (x.Nam % 4 == 0 && x.Nam % 100 != 0)
		return 1;
	if (x.Nam % 400 == 0)
		return 1;
	return 0;
}

int SoNgayToiDaTrongNam(NGAY x)
{
	if (ktNhuan(x))
		return 366;
	return 365;
}