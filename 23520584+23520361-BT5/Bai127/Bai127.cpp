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
float kc1(dt,dt);
int tuongdoi(dt, dt);

int main()
{
	dt x, y;
	cout << "\nNhap duong tron 1: ";
	nhap(x);
	cout << "\nToa do duong tron 1 la: ";
	xuat(x);
	cout << "\nNhap duong tron 2: ";
	nhap(y);
	cout << "\nToa do duong tron 2 la: ";
	xuat(y);
	if (tuongdoi(x, y) == 0)
		cout << "\nTrung";
	else if (tuongdoi(x, y) == 1)
		cout << "\nRoi nhau";
	else if (tuongdoi(x, y) == 2)
		cout << "\nTiep xuc ngoai";
	else if (tuongdoi(x, y) == 3)
		cout << "\nCat nhau";
	else if (tuongdoi(x, y) == 4)
		cout << "\nTiep xuc trong";
	else
		cout << "\nChua trong nhau";
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

float kc1(dt a, dt b)
{
	return float(sqrt(pow((b.I.x - b.I.x), 2) + pow((b.I.y - b.I.y), 2)));
}

int tuongdoi(dt c1, dt c2)
{
	float kc = kc1(c1, c2);
	if (kc == 0 && c1.R == c2.R)
		return 0;
	if (kc > (c1.R + c2.R))
		return 1;
	if (kc == (c1.R + c2.R))
		return 2;
	if (kc < (c1.R + c2.R) && kc > abs(c1.R -c2.R))
		return 3;
	if (kc == abs(c1.R - c2.R))
		return 4;
	return 5;
}