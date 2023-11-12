#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

struct diem
{
	float x;
	float y;
};

struct dt
{
	diem I;
	float R;
};

void nhap(dt&);
void xuat(dt);
void nhap(diem&);
void xuat(diem);

int main()
{
	dt x;
	nhap(x);
	cout << "Toa do duong tron la: ";
	xuat(x);
	return 0;
}

void nhap(diem& a)
{
	cout << "\nNhap x: ";
	cin >> a.x;
	cout << "\nNhap y: ";
	cin >> a.y;
}

void xuat(diem a)
{
	cout << "(" << a.x << "," << a.y << ")";
}

void nhap(dt& a)
{
	cout << "\nNhap tam: ";
	nhap(a.I);
	cout << "\nNhap ban kinh: ";
	cin >> a.R;
}

void xuat(dt a)
{
	cout << "\nTam: ";
	xuat(a.I);
	cout << "\nBan kinh: " << a.R;
}