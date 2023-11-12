#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

struct phuc
{
	float thuc;
	float ao;
};

void nhap(phuc&);
void xuat(phuc);
phuc hieu(phuc, phuc);

int main()
{
	phuc a, b;
	cout << "\nNhap so phuc 1: ";
	nhap(a);
	cout << "\nNhap so phuc 2: ";
	nhap(b);
	cout << "\nSo phuc 1: ";
	xuat(a);
	cout << "\nSo phuc 2: ";
	xuat(b);
	cout << "\nHieu hai so phuc la: ";
	xuat(hieu(a, b));
	return 0;
}

void nhap(phuc& a)
{
	cout << "\nNhap so thuc: ";
	cin >> a.thuc;
	cout << "\nNhap so ao: ";
	cin >> a.ao;
}

void xuat(phuc a)
{
	cout << "\n" << a.thuc << "+" << a.ao << "i";
}

phuc hieu(phuc a, phuc b)
{
	phuc c;
	c.thuc = a.thuc - b.thuc;
	c.ao = a.ao - b.ao;
	return c;
}