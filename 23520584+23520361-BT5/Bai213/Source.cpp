#include <iostream>
#include <iomanip>
using namespace std;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DUONGTHANG &);
void Nhap(DUONGTHANG[], int &);
void Xuat(DUONGTHANG);
void Xuat(DUONGTHANG[], int);

int main()
{
	int n;
	DUONGTHANG arr[100];

	Nhap(arr, n);
	Xuat(arr, n);

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

void Nhap(DUONGTHANG a[], int &n)
{
	cout << "Nhap so luong duong thang: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "Nhap duong thang A[" << i << "]:\n";
		Nhap(a[i]);
	}
}

void Xuat(DUONGTHANG d)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\n a = " << d.a;
	cout << "\n b = " << d.b;
	cout << "\n c = " << d.c;
}

void Xuat(DUONGTHANG a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Duong thang A[" << i << "]:";
		Xuat(a[i]);
		cout << endl;
	}
}
