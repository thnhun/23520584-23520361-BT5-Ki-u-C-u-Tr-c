#include<iostream>
#include<cmath>
#include <limits>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Nhap(DIEM[], int&);
double KhoangCach(DIEM, DIEM);
DIEM ToaDoGanNhat(DIEM[], DIEM, int);

int main()
{
	DIEM a[100], P;
	int n;
	Nhap(a, n);
	cout << "\nNhap diem P: ";
	Nhap(P);
	DIEM kq = ToaDoGanNhat(a, P, n);
	cout << "ket qua la: (" << kq.x << ", " << kq.y << ")";
	return 0;
}
void Nhap(DIEM& a)
{
	cout << "\nNhap x: ";
	cin >> a.x;
	cout << "Nhap y: ";
	cin >> a.y;
}
void Nhap(DIEM a[], int& n)
{
	cout << "Nhap so luong diem: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "Diem thu " << i + 1 << " la: ";
		Nhap(a[i]);
	}
}
double KhoangCach(DIEM a, DIEM b)
{
	return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}
DIEM ToaDoGanNhat(DIEM a[], DIEM P, int n)
{
	double  min = numeric_limits<double>::max();
	for (int i = 0; i < n; i++)
	{
		if (KhoangCach(a[i], P) < min)
			min = KhoangCach(a[i], P);
		return a[i];
	}
}