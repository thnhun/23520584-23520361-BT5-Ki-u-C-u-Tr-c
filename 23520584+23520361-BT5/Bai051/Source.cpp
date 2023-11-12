#include <iostream>
#include <cmath>

using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO &);
void Xuat(PHANSO);
PHANSO Thuong(PHANSO, PHANSO);

int main()
{
	PHANSO ps1, ps2, ketqua;

	cout << "Nhap phan so thu nhat:\n";
	Nhap(ps1);

	cout << "Nhap phan so thu hai:\n";
	Nhap(ps2);

	ketqua = Thuong(ps1, ps2);

	cout << "Thuong hai phan so: ";
	Xuat(ketqua);

	return 0;
}

int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a + b;
}

void RutGon(PHANSO &x)
{
	int kq = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
}

void Nhap(PHANSO &x)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Xuat(PHANSO x)
{
	cout << x.Tu << "/" << x.Mau;
}

PHANSO Thuong(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Mau;
	temp.Mau = x.Mau * y.Tu;
	RutGon(temp);
	return temp;
}