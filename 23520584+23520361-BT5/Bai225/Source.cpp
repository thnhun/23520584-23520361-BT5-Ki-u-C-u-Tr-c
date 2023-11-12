#include <iostream>
#include <cmath>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct DuongThang
{
	float a, b, c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DIEM &);
void Nhap(DUONGTHANG &);
void Nhap(DIEM[][100], int &, int &);
float KhoangCach(DIEM, DUONGTHANG);
DIEM TimDiemGanNhat(DIEM[][100], int, int, DUONGTHANG);

int main()
{
	DIEM a[100][100];
	DUONGTHANG dt;
	int m, n;

	Nhap(a, m, n);
	cout << "Nhap duong thang:\n";
	Nhap(dt);

	DIEM result = TimDiemGanNhat(a, m, n, dt);

	cout << "Diem gan nhat la: ";
	cout << "(" << result.x << ", " << result.y << ")" << endl;

	return 0;
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

void Nhap(DIEM &d)
{
	cout << "Nhap x: ";
	cin >> d.x;
	cout << "Nhap y: ";
	cin >> d.y;
}

void Nhap(DUONGTHANG &dt)
{
	cout << "Nhap a: ";
	cin >> dt.a;
	cout << "Nhap b: ";
	cin >> dt.b;
	cout << "Nhap c: ";
	cin >> dt.c;
}

float KhoangCach(DIEM d, DUONGTHANG dt)
{
	return abs(dt.a * d.x + dt.b * d.y + dt.c) / sqrt(dt.a * dt.a + dt.b * dt.b);
}

DIEM TimDiemGanNhat(DIEM a[][100], int m, int n, DUONGTHANG dt)
{
	DIEM diemGanNhat = a[0][0];
	float minDistance = KhoangCach(a[0][0], dt);

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			float distance = KhoangCach(a[i][j], dt);
			if (distance < minDistance)
			{
				minDistance = distance;
				diemGanNhat = a[i][j];
			}
		}
	}

	return diemGanNhat;
}
