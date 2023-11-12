#include <iostream>
using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

SOPHUC NhapSoPhuc(SOPHUC &);
void Nhap(SOPHUC[][100], int &, int &);
SOPHUC ThucAoAmCuoi(SOPHUC[][100], int, int);
SOPHUC XuatSoPhuc(SOPHUC);

int main()
{
	int m, n;
	SOPHUC matrix[100][100];
	Nhap(matrix, m, n);
	SOPHUC result = ThucAoAmCuoi(matrix, m, n);
	cout << "So phuc cuoi cung co phan thuc am va phan ao am trong ma tran: ";
	XuatSoPhuc(result);
	return 0;
}

SOPHUC NhapSoPhuc(SOPHUC &x)
{
	cout << "Nhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
	return x;
}

void Nhap(SOPHUC a[][100], int &m, int &n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap so phuc a[" << i << "][" << j << "]:\n";
			a[i][j] = NhapSoPhuc(a[i][j]);
		}
	}
}

SOPHUC ThucAoAmCuoi(SOPHUC a[][100], int m, int n)
{
	for (int i = m - 1; i >= 0; i--)
	{
		for (int j = n - 1; j >= 0; j--)
		{
			if (a[i][j].Thuc < 0 && a[i][j].Ao < 0)
			{
				return a[i][j];
			}
		}
	}
	return {0, 0};
}

SOPHUC XuatSoPhuc(SOPHUC x)
{
	cout << "\nThuc: " << x.Thuc;
	cout << "\nAo: " << x.Ao;
	return x;
}