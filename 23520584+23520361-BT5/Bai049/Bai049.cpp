#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

struct phanso
{
	int tu;
	int mau;
};

void nhap(phanso&);
void xuat(phanso);
phanso rutgon(phanso&);
int ucln(int a, int b);
phanso hieu(phanso, phanso);

int main()
{
	phanso a, b;
	cout << "\nNhap phan so thu nhat: ";
	nhap(a);
	cout << "\nNhap phan so thu hai: ";
	nhap(b);
	cout << "\nPhan so thu nhat la: " << endl;
	xuat(a);
	cout << "\nPhan so thu hai la: " << endl;
	xuat(b);
	phanso c;
	c = hieu(a, b);
	cout << "\nHieu cua hai phan so la: " << endl;
	xuat(rutgon(c));

	return 0;
}

void nhap(phanso& a)
{
	cout << "\nNhap tu: ";
	cin >> a.tu;
	cout << "\nNhap mau: ";
	cin >> a.mau;
}

void xuat(phanso a)
{
	cout << a.tu << "/" << a.mau;
}

int ucln(int a, int b)
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

phanso rutgon(phanso& a)
{
	phanso b;
	int kq = ucln(a.tu, a.mau);
	b.tu = a.tu / kq;
	b.mau = a.mau / kq;
	return b;
}

phanso hieu(phanso a, phanso b)
{
	phanso c;
	c.tu = a.tu * b.mau - b.tu * a.mau;
	c.mau = a.mau * b.mau;
	return c;
}