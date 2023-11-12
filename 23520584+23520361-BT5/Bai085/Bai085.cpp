#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

struct thoigian
{
	int gio;
	int phut;
	int giay;
};

void nhap(thoigian&);
void xuat(thoigian);
bool kthople(thoigian);

int main()
{
	thoigian a;
	cout << "Nhap thoi gian: " << endl;
	nhap(a);
	xuat(a);
	if (kthople(a) == true)
		cout << "\nthoi gian hop le";
	else
		cout << "\nthoi gian khong hop le";
	return 0;
}

void nhap(thoigian& x)
{
	cout << "\nNhap gio: ";
	cin >> x.gio;
	cout << "\nNhap phut: ";
	cin >> x.phut;
	cout << "\nNhap giay: ";
	cin >> x.giay;
}

void xuat(thoigian x)
{
	cout << "\n" << x.gio << ":" << x.phut << ":" << x.giay;
}

bool kthople(thoigian x)
{
	if (!(x.gio >= 0 && x.gio <= 23))
		return 0;
	if (!(x.phut >= 0 && x.phut <= 59))
		return 0;
	if (!(x.giay >= 0 && x.giay <= 59))
		return 0;
	return 1;
}