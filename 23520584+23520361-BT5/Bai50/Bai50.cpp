#include <iostream>
#include <cmath>
using namespace std;
struct phanso
{
	int Tu;
	int Mau;
};
typedef struct phanso PHANSO;
void Nhap(PHANSO&);
void Xuat(PHANSO);
void RutGon(PHANSO&);
PHANSO Tich(PHANSO, PHANSO);
int main()
{
	PHANSO A, B;
	cout << "Nhap phan so 1:";
	Nhap(A);
	cout << "Phan so 1:";
	Xuat(A);
	cout << "\nNhap phan so 2:";
	Nhap(B);
	cout << "Phan so 2:";
	Xuat(B);
	PHANSO kq = Tich(A, B);
	cout << "\nTich la: ";
	Xuat(kq);
	return 0;
}
void Nhap(PHANSO& x)
{
	cout << "\nNhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Xuat(PHANSO x)
{
	cout << "\nTu = " << x.Tu;
	cout << "\nMau = " << x.Mau;
}
PHANSO Tich(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Tu;
	temp.Mau = x.Mau * y.Mau;
	RutGon(temp);
	return temp;
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
void RutGon(PHANSO& x)
{
	int kq = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
}