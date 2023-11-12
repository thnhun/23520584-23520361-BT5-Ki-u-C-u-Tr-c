#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

struct date
{
	int ngay;
	int thang;
	int nam;
};

void nhap(date&);
void xuat(date);

int main()
{
	date a;
	cout << "Nhap date: ";
	nhap(a);
	cout << "Date: ";
	xuat(a);
	return 0;
}

void nhap(date& a)
{
	cout << "\nNhap ngay: ";
	cin >> a.ngay;
	cout << "\nNhap thang: ";
	cin >> a.thang;
	cout << "\nNhap nam:";
	cin >> a.nam;
}

void xuat(date a)
{
	cout << "\n" << a.ngay << "/" << a.thang << "/" << a.nam;
}

