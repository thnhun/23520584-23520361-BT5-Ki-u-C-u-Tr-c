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
bool kthople(date);
int ktNhuan(date);
int SoNgayToiDaTrongThang(date);

int main()
{
	date a;
	cout << "Nhap date: ";
	nhap(a);
	cout << "Date: ";
	xuat(a);
	if (kthople(a))
		cout << "\nHop ly";
	else
		cout << "\nKhong hop ly";
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

int ktNhuan(date x)
{
	if (x.nam % 4 == 0 && x.nam % 100 != 0)
		return 1;
	if (x.nam % 400 == 0)
		return 1;
	return 0;
}

int SoNgayToiDaTrongThang(date x)
{
	int ngaythang[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (ktNhuan(x))
		ngaythang[1] = 29;
	return ngaythang[x.thang - 1];
}

bool kthople(date x)
{
	if (x.nam < 1)
		return 0;
	if (x.thang < 1)
		return 0;
	if (x.thang > 12)
		return 0;
	if (x.ngay < 1)
		return 0;
	if (x.ngay > SoNgayToiDaTrongThang(x))
		return 0;
	return 1;
}