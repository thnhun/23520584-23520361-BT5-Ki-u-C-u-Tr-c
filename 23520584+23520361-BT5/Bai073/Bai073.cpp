#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

struct honso
{
	int nguyen;
	int tu;
	int mau;
};

void nhap(honso&);
void xuat(honso);

int main()
{
	honso A;
	cout << "\nNhap hon so: ";
	nhap(A);
	xuat(A);
	return 0;
}

void nhap(honso& a)
{
	cout << "\nNhap so nguyen";
	cin >> a.nguyen;
	cout << "\nNhap tu: ";
	cin >> a.tu;
	cout << "\nNhap mau:";
	cin >> a.mau;

}

void xuat(honso a)
{
	cout <<"\n" << a.nguyen << "(" << a.tu << "/" << a.mau << ")";
}