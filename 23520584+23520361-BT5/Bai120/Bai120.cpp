#include <iostream>
#include <iomanip>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

struct duongtron
{
	DIEM I;
	float R;
};
typedef struct duongtron DUONGTRON;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);
int main()
{
	DUONGTRON dt;
	Nhap(dt);
	Xuat(dt);
	return 1;
}

void Nhap(DIEM& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Nhap(DUONGTRON& c)
{
	cout << "Nhap tam: ";
	Nhap(c.I);
	cout << "Nhap ban kinh:";
	cin >> c.R;
}

void Xuat(DIEM P)
{
	cout << "\n x=" << P.x;
	cout << "\n y=" << P.y;
}

void Xuat(DUONGTRON c)
{
	cout << "\n Tam: ";
	Xuat(c.I);
	cout << "\n Ban kinh:" << c.R;
}




