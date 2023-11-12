#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

struct phuc
{
	float thuc;
	float ao;
};
typedef struct phuc SOPHUC;

void nhap(phuc&);
void xuat(phuc);
void Nhap(SOPHUC[], int&);
void Xuat(SOPHUC[], int);
SOPHUC Tong(SOPHUC[], int);
SOPHUC Tong(phuc, phuc[]);

int main()
{
	int n;
	phuc a[50];
	Nhap(a, n);
	Xuat(a, n);
	phuc c = Tong(a, n);
	xuat(c);
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

void Nhap(SOPHUC a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		nhap(a[i]);
	}
}

void Xuat(SOPHUC a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		xuat(a[i]);
}

phuc Tong(phuc a, phuc b)
{
	phuc s;
	s.thuc = a.thuc + b.thuc;
	s.ao = a.ao + b.ao;
	return s;
}

SOPHUC Tong(SOPHUC a[], int n)
{
	SOPHUC s = { 0,0 };
	for (int i = 0; i <= n - 1; i++)
		s = Tong(s, a[i]);
	return s;
}
