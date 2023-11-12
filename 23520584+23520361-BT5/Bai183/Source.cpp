#include <iostream>
using namespace std;

struct phanso
{
	int Tu;
	int Mau;
};
typedef struct phanso PHANSO;

void Nhap(PHANSO &);
void Xuat(PHANSO);
void Nhap(PHANSO[], int &);
void Xuat(PHANSO[], int);

int main()
{
	int n;
	PHANSO a[100];

	Nhap(a, n);
	Xuat(a, n);

	return 0;
}

void Nhap(PHANSO &x)
{
	cout << "\nNhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Nhap(PHANSO a[], int &n)
{
	cout << "Nhap n: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}

void Xuat(PHANSO x)
{
	cout << x.Tu << "/" << x.Mau << endl;
}

void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i < n; i++)
		Xuat(a[i]);
}
