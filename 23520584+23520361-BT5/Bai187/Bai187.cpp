#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct phanso
{
	float tu;
	float mau;
};
typedef struct phanso PHANSO;

void Nhap(phanso& a)
{
	cout << "\nNhap tu: ";
	cin >> a.tu;
	cout << "\nNhap mau: ";
	cin >> a.mau;
}

void Xuat(phanso a)
{
	cout << a.tu << "/" << a.mau;
}

void Xuat(phanso a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		Xuat(a[i]);
}

void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}

bool ktDuong(phanso a)
{
	if (a.tu * a.mau > 0)
		return 1;
	return 0;
}

int DemDuong(PHANSO a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (ktDuong(a[i]))
			dem++;
	return dem;
}

int main()
{
	int n;
	phanso a[50];
	Nhap(a, n);
	Xuat(a, n);
	cout << DemDuong(a, n);
	return 0;
}