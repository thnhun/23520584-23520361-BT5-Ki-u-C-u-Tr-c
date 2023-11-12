#include <iostream>
using namespace std;

struct PhanSo
{
	int tu;
	int mau;
};

typedef struct PhanSo PHANSO;

PHANSO NhapPhanSo();
void XuatPhanSo(PHANSO);
bool ktAm(PHANSO);
int SoSanh(PHANSO, PHANSO);
PHANSO AmLonNhat(PHANSO[][100], int, int);
void Nhap(PHANSO[][100], int &, int &);
void Xuat(PHANSO[][100], int, int);

int main()
{
	int m, n;
	PHANSO matrix[100][100];
	Nhap(matrix, m, n);
	PHANSO result = AmLonNhat(matrix, m, n);
	cout << "Phan so am lon nhat trong ma tran la: ";
	XuatPhanSo(result);
	return 0;
}

void XuatPhanSo(PHANSO ps)
{
	if (ps.tu == 0)
		cout << 0;
	else
		cout << ps.tu << "/" << ps.mau;
}

bool ktAm(PHANSO ps)
{
	return ps.tu * ps.mau < 0;
}

int SoSanh(PHANSO ps1, PHANSO ps2)
{
	int giaTri1 = ps1.tu * ps2.mau;
	int giaTri2 = ps2.tu * ps1.mau;

	if (giaTri1 < giaTri2)
		return -1;
	else if (giaTri1 > giaTri2)
		return 1;
	else
		return 0;
}

PHANSO AmLonNhat(PHANSO a[][100], int m, int n)
{
	PHANSO temp = {0, 1};
	PHANSO lc = temp;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (ktAm(a[i][j]))
			{
				if (SoSanh(lc, temp) == 0 || SoSanh(a[i][j], lc) == 1)
				{
					lc = a[i][j];
				}
			}
		}
	}
	return lc;
}

void Nhap(PHANSO a[][100], int &m, int &n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap phan so a[" << i << "][" << j << "]:\n";
			a[i][j] = NhapPhanSo();
		}
	}
}

void Xuat(PHANSO a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Phan so a[" << i << "][" << j << "]: ";
			XuatPhanSo(a[i][j]);
			cout << endl;
		}
	}
}

PHANSO NhapPhanSo()
{
	PHANSO ps;
	cout << "Nhap tu so: ";
	cin >> ps.tu;
	cout << "Nhap mau so: ";
	cin >> ps.mau;
	return ps;
}