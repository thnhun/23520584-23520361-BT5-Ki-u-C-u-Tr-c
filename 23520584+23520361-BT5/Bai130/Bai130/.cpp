#include<iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
	float z;
};
typedef struct Diem DIEM;

struct Hinhcau
{
	DIEM I;
	float R;
};
typedef struct Hinhcau  HINHCAU;

void Nhap(DIEM&);
void Nhap(HINHCAU&);
void Xuat(DIEM);
void Xuat(HINHCAU);

int main()
{
	DIEM a;
	HINHCAU c;
	Nhap(c);
	Xuat(c);
	return 0;
}
void Nhap(DIEM& x)
{
	cout << "\nNhap x: ";
	cin >> x.x;
	cout << "Nhap y: ";
	cin >> x.y;
	cout << "NHap z: ";
	cin >> x.z;
}
void Nhap(HINHCAU& x)
{
	cout << "Nhap tam: ";
	Nhap(x.I);
	cout << "Nhap ban kinh: ";
	cin >> x.R;
}
void Xuat(DIEM x)
{
	cout << "Toa do tam la: " << x.x << ", " << x.y << ", " << x.z;
}
void Xuat(HINHCAU x)
{
	Xuat(x.I);
	cout << "\nBan kinh la: " << x.R;
}