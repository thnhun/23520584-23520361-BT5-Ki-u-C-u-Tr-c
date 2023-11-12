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
typedef struct dt DUONGTRON;

void nhap(dt&);
void xuat(dt);
void nhap(diem&);
void xuat(diem);
float KhoangCachGoc(diem);
void Nhap(DUONGTRON[], int&);
void Xuat(DUONGTRON[], int);
int ktQuaGoc(DUONGTRON);
int ktTonTai(DUONGTRON[], int);

int main()
{
	int n;
	dt a[50];
	Nhap(a, n);
	Xuat(a, n);
	if (ktTonTai(a, n) == 1)
		cout << "\nCo ton tai";
	else
		cout << "\nKhong ton tai";
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

void Xuat(DUONGTRON a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		xuat(a[i]);
}

void Nhap(DUONGTRON a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		nhap(a[i]);
	}
}

float KhoangCachGoc(diem P)
{
	return sqrt(P.x * P.x + P.y * P.y);
}

int ktQuaGoc(DUONGTRON c)
{
	float kc = KhoangCachGoc(c.I);
	if (kc == c.R)
		return 1;
	return 0;
}
int ktTonTai(DUONGTRON a[], int n)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
		if (ktQuaGoc(a[i]) == 1)
			flag = 1;
	return flag;
}