#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct HonSo
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct HonSo HONSO;
void Nhap(HONSO&);
void Xuat(HONSO);
HONSO Thuong(HONSO, HONSO);

int main()
{
	HONSO A, B;

	cout << "\nNhap hon so 1 :";
	Nhap(A);
	cout << "\nNhap hon so 2 :";
	Nhap(B);

	cout << "\nHon so 1:";
	Xuat(A);
	cout << "\nHon so 2:";
	Xuat(B);

	HONSO C = Thuong(A, B);
	cout << "\nThuong hai hon so la : ";
	Xuat(C);

	return 1;
}

void Nhap(HONSO& x)
{
	cout << "\nNhap nguyen: ";
	cin >> x.Nguyen;
	cout << "\nNhap tu: ";
	cin >> x.Tu;
	cout << "\nNhap mau: ";
	cin >> x.Mau;
}

void Xuat(HONSO x)
{
	cout << "\n Nguyen:" << x.Nguyen;
	cout << "\n Tu:" << x.Tu;
	cout << "\n Mau:" << x.Mau;

}

void RutGon(HONSO& x)
{
	int kq = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
	x.Nguyen = x.Nguyen + x.Tu / x.Mau;
	x.Tu = x.Tu % x.Mau;
}
int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
		if (a > b)
			a = a - b;
		else
			b = b - a;
	return a + b;
}

HONSO Thuong(HONSO x, HONSO y)
{
		x.Tu = x.Nguyen * x.Mau + x.Tu;
		x.Nguyen = 0;
		y.Tu = y.Nguyen * y.Mau + y.Tu;
		y.Nguyen = 0;
		HONSO temp;
		temp.Tu = x.Tu * y.Mau;
		temp.Mau = x.Mau * y.Tu;
		temp.Nguyen = 0;
		RutGon(temp);
		return temp;
}

