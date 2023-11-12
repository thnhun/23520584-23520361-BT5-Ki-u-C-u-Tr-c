#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

struct diem
{
	float x;
	float y;
};

struct tg
{
	diem a;
	diem b;
	diem c;
};

void nhap(diem&);
void xuat(diem);
void nhap(tg&);
void xuat(tg);
float kc(diem, diem);
int DangTamGiac(tg);

int main()
{
	tg a;
	nhap(a);
	xuat(a);
	if (DangTamGiac(a) == 0)
		cout << "\nkhong la tam giac";
	else if (DangTamGiac(a) == 1)
		cout << "\nTam giac deu";
	else if (DangTamGiac(a) == 2)
		cout << "\ntam giac vuong can";
	else if (DangTamGiac(a) == 3)
		cout << "\ntam giac vuong";
	else if (DangTamGiac(a) == 4)
		cout << "\ntam giac can";
	else if (DangTamGiac(a) == 5)
		cout << "\ntam giac thuong";
	return 0;
}

void nhap(diem& a)
{
	cin >> a.x;
	cin >> a.y;
	cout << endl;
}

void xuat(diem a)
{
	cout << '\n' << "(" << a.x << "," << a.y << ")" << endl;
}

void nhap(tg& a)
{
	nhap(a.a);
	nhap(a.b);
	nhap(a.c);
}

void xuat(tg a)
{
	xuat(a.a);
	xuat(a.b);
	xuat(a.c);
}

float kc(diem a, diem b)
{
	return (float)(sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y)));
}

int DangTamGiac(tg t)
{
	float a = kc(t.b, t.c);
	float b = kc(t.a, t.c);
	float c = kc(t.a, t.b);
	if (!(a + b > c && b + c > a && c + a > b))
		return 0;
	if (a == b && b == c)
		return 1;
	if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
	{
		if (a == b || b == c || a == c)
			return 2;
		return 3;
	}
	if (a == b || b == c || a == c)
		return 4;
	return 5;
}