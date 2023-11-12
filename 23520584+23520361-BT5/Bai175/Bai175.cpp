#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct DIEM
{
	float x;
	float y;
};

void Nhap(DIEM a)
{
	cout << "\nNhap x: ";
	cin >> a.x;
	cout << "\nNhap y: ";
	cin >> a.y;
}

void Nhap(DIEM a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}

void Xuat(DIEM a)
{
	cout << "(" << a.x << ", " << a.y << ")";
}

void Xuat(DIEM a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		Xuat(a[i]);
}

int DemDiem(DIEM a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i].x > 0)
			dem++;
	return dem;
}

int main()
{
	DIEM a[50];
	int n;
	Nhap(a,n);
	Xuat(a, n);
	cout << "\nSo luong diem co hoanh do duong la: " << DemDiem(a, n);
	return 0;
}