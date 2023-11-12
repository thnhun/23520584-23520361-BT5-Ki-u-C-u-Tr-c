#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct DIEM
{
	float x;
	float y;
};

struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;

void Nhap(DUONGTHANG& d)
{
	cout << "Nhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}

void Xuat(DUONGTHANG d)
{
	cout << "\na: " << d.a;
	cout << "\nb: " << d.b;
	cout << "\nc: " << d.c;
	cout << endl;
}

void Nhap(DUONGTHANG a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap duong thang A[" << i << "]:\n";
		Nhap(a[i]);
	}
}

void Xuat(DUONGTHANG a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Duong thang A[" << i << "]:";
		Xuat(a[i]);
		cout << endl;
	}
}

int ktThuoc(DUONGTHANG d, DIEM P)
{
	if ((d.a * P.x + d.b * P.y + d.c) == 0)
		return 1;
	return 0;
}

int ktQuaDiem(DUONGTHANG a[], int n, DIEM P)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
		if (ktThuoc(a[i], P))
			flag = 1;
	return flag;
}
int main()
{
	DIEM P;
	cin >> P.x;
	cin >> P.y;
	DUONGTHANG a[50];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	if (ktQuaDiem(a, n, P) == 1)
		cout << "\nCo di qua";
	else
		cout << "\nKhong di qua";
	return 0;
}
