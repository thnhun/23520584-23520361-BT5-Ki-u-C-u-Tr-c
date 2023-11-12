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

struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;
void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);int TuongDoi(DUONGTRON, DUONGTHANG);
int main()
{
	DUONGTRON c;
	Nhap(c);
	Xuat(c);
	DUONGTHANG d;
	Nhapdth(d);
	Xuatdth(d);
	int flag = TuongDoi(c,d);
	if (flag == 0)
		cout << endl << "Duong thang ko cat duong tron";
	else
		if (flag == 1)
			cout << endl << "Duong thang tiep xuc duong tron";
		else
			cout << endl << "Duong thang cat duong tron tai 2 diem";
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

void Nhapdth(DUONGTHANG& d)
{
	cout << "Nhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
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


void Xuatdth(DUONGTHANG d)
{
	cout << "\na: " << d.a;
	cout << "\nb: " << d.b;
	cout << "\nc: " << d.c;
}

int TuongDoi(DUONGTRON c, DUONGTHANG d)
{
	float kc = KhoangCach(d, c.I);
	if (kc > c.R)
		return 0;
	if (kc < c.R)
		return 2;
	return 1;
}

float KhoangCach(DUONGTHANG d, DIEM P)
{
	float tu = abs(d.a * P.x + d.b * P.y + d.c);
	float mau = sqrt(d.a * d.a + d.b * d.b);
	return tu / mau;
}
