#include <iostream>
#include <iomanip>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DUONGTHANG &d);
void Xuat(DUONGTHANG d);
int ktCat(DUONGTHANG dt1, DUONGTHANG dt2);
DIEM GiaoDiem(DUONGTHANG dt1, DUONGTHANG dt2);
int ktThuoc(DUONGTHANG dt, DIEM p);
int ktDongQui(DUONGTHANG a[], int n);

int main()
{
	int n;
	DUONGTHANG arr[100]; // Assuming a fixed-size array

	cout << "Nhap so luong duong thang: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "Nhap duong thang A[" << i << "]:\n";
		Nhap(arr[i]);
	}

	if (ktDongQui(arr, n))
	{
		cout << "Co ba duong thang dong qui\n";
	}
	else
	{
		cout << "Khong co ba duong thang dong qui\n";
	}

	return 0;
}

void Nhap(DUONGTHANG &d)
{
	cout << "Nhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}

void Xuat(DUONGTHANG d)
{
	cout << "\n a = " << d.a;
	cout << "\n b = " << d.b;
	cout << "\n c = " << d.c;
}

int ktCat(DUONGTHANG dt1, DUONGTHANG dt2)
{
	return (dt1.a * dt2.b - dt2.a * dt1.b != 0);
}

DIEM GiaoDiem(DUONGTHANG dt1, DUONGTHANG dt2)
{
	DIEM p;
	p.x = (dt1.b * dt2.c - dt2.b * dt1.c) / (dt1.a * dt2.b - dt2.a * dt1.b);
	p.y = (dt1.c * dt2.a - dt2.c * dt1.a) / (dt1.a * dt2.b - dt2.a * dt1.b);
	return p;
}

int ktThuoc(DUONGTHANG dt, DIEM p)
{
	return (dt.a * p.x + dt.b * p.y + dt.c == 0);
}

int ktDongQui(DUONGTHANG a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
	{
		for (int j = i + 1; j <= n - 1; j++)
		{
			if (ktCat(a[i], a[j]))
			{
				DIEM PP = GiaoDiem(a[i], a[j]);
				for (int k = 0; k < n; k++)
				{
					if (k != i && k != j && ktThuoc(a[k], PP))
						return 1;
				}
			}
		}
	}
	return 0;
}