#include<iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Nhap(DIEM[], int&);
bool kt(DIEM);
int Dem(DIEM[], int);

int main()
{
	DIEM a[100];
	int n;
	Nhap(a, n);
	cout << "ket qua la: " << Dem(a, n);
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
bool kt(DIEM a)
{
	if (a.x < 0 && a.y < 0)
		return true;
	return false;
}
int Dem(DIEM a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (kt(a[i]))
			dem++;
	return dem;
}