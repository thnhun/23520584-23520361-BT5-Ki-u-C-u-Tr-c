#include<iostream>
using namespace std;

struct Sophuc
{
	float thuc;
	float ao;
};
typedef struct Sophuc SOPHUC;

void Nhap(SOPHUC&);
void Nhap(SOPHUC[][100], int&, int&);
bool ktTraiDau(SOPHUC);
int DemDong(SOPHUC[][100], int, int);

int main()
{
	SOPHUC a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "Ket qua la: " << DemDong(a, m, n);
	return 0;
}
void Nhap(SOPHUC& x)
{
	cout << "\nNhap phan ao: ";
	cin >> x.ao;
	cout << "Nhap phan thuc: ";
	cin >> x.thuc;
}
void Nhap(SOPHUC a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;

	for (int i=0;i<m;i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap so phuc a[" << i << "][" << j << "]: ";
			Nhap(a[i][j]);
		}
}
bool ktTraiDau(SOPHUC x) 
{
	return (x.thuc * x.ao < 0);
}
int DemDong(SOPHUC a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (!ktTraiDau(a[i][j]))
				break;
			if (j == n-1)
				dem++;
		}
	}
	return dem;
}