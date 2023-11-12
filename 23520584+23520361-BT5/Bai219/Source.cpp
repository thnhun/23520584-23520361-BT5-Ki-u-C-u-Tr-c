#include <iostream>
#include <iomanip>
using namespace std;

struct Diem
{
	float x;
	float y;
};

typedef struct Diem DIEM;

void Nhap(DIEM &);
void Xuat(DIEM);
void Nhap(DIEM[][100], int &, int &);
void Xuat(DIEM[][100], int, int);

int main()
{
	DIEM a[100][100];
	int m, n;

	Nhap(a, m, n);
	Xuat(a, m, n);

	return 0;
}

void Nhap(DIEM &d)
{
	cout << "Nhap x: ";
	cin >> d.x;
	cout << "Nhap y: ";
	cin >> d.y;
}

void Xuat(DIEM d)
{
	cout << "(" << d.x << ", " << d.y << ")";
}

void Nhap(DIEM a[][100], int &m, int &n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]:\n";
			Nhap(a[i][j]);
		}
}

void Xuat(DIEM a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Diem A[" << i << "][" << j << "]:";
			Xuat(a[i][j]);
			cout << endl;
		}
}