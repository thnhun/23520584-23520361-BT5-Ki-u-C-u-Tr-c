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

int main()
{
	donthuc a;
	cout << "Nhap don thuc: ";
	nhap(a);
	cout << "\nDon thuc: ";
	xuat(a);
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