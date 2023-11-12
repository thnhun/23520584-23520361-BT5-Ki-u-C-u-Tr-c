#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

struct donthuc
{
	float a;
	int n;
};

void nhap(donthuc&);
void xuat(donthuc);
donthuc daoham(donthuc);
donthuc daoham(donthuc, int);

int main()
{
	donthuc a;
	int k;
	cout << "Nhap don thuc: ";
	nhap(a);
	cout << "\nDon thuc: ";
	xuat(a);
	cout << "\nNhap k: ";
	cin >> k;
	cout << "\nDao ham cap " << k << "la: ";
	donthuc c = daoham(a, k);
	xuat(c);
	return 0;
}

void nhap(donthuc& a)
{
	cout << "\nNhap he so: ";
	cin >> a.a;
	cout << "\nNhap so mu: ";
	cin >> a.n;
}

void xuat(donthuc a)
{
	cout << "\n" << a.a << "x^" << a.n;
}

donthuc daoham(donthuc a)
{
	donthuc c;
	c.a = a.a * a.n;
	c.n = a.n - 1;
	return c;
}

donthuc daoham(donthuc a, int k)
{
	donthuc b = a;
	for (int i = 1;i <= k;i++)
		b = daoham(b);
	return b;
}