#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

struct phanso
{
	int tu;
	int mau;
};
typedef struct phanso PHANSO;

void nhap(phanso&);
void xuat(phanso);
void Nhap(PHANSO[][100], int&, int&);
PHANSO LonNhat(PHANSO[][100], int, int);
int SoSanh(PHANSO, PHANSO);

int main()
{
	phanso a[100][100];
	int m, n;
	Nhap(a, m, n);
	PHANSO c = LonNhat(a, m, n);
	xuat(c);
	return 0;
}

void nhap(phanso& a)
{
	cout << "\nNhap tu: ";
	cin >> a.tu;
	cout << "\nNhap mau: ";
	cin >> a.mau;
}

void xuat(phanso a)
{
	cout << a.tu << "/" << a.mau;
}

void Nhap(PHANSO a[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]:\n";
			nhap(a[i][j]);
		}
}

int SoSanh(PHANSO x, PHANSO y)
{
	float a = (float)x.Tu / x.Mau;
	float b = (float)y.Tu / y.Mau;
	if (a > b)
		return 1;
	if (a < b)
		return -1;
	return 0;
}

PHANSO LonNhat(PHANSO a[][100], int m, int n)
{
	PHANSO lc = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (SoSanh(a[i][j], lc) == 1)
				lc = a[i][j];
	return lc;
}