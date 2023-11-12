#include<iostream>
#include<cmath>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Nhap(DIEM[], int);
void Xuat(DIEM);
double KhoangCach(DIEM, DIEM);
void GanNhauNhat(DIEM[], int, DIEM&, DIEM&);


int main()
{
	DIEM a[100];
	DIEM P, Q;
	int n;
	cout << "Nhap so luong diem: ";
	cin >> n;
	Nhap(a, n);
	GanNhauNhat(a, n, P, Q);
	return 0;
}
void Nhap(DIEM& a)
{
	cout << "\nNhap x: ";
	cin >> a.x;
	cout << "Nhap y: ";
	cin >> a.y;
}
void Nhap(DIEM a[], int n)
{

	for (int i = 0; i < n; i++)
	{
		cout << "Diem thu " << i + 1 << " la: ";
		Nhap(a[i]);
	}
}
void Xuat(DIEM a)
{
	cout << "(" << a.x << ", " << a.y << ")";
}
double KhoangCach(DIEM P, DIEM Q)
{
	return sqrt(pow((P.x - Q.x), 2) + pow((P.y - Q.y), 2));
}
void GanNhauNhat(DIEM a[], int n, DIEM& P, DIEM& Q)
{
	P = a[0];
	Q = a[1];
	for (int i=1;i<n-2;i++)
		for (int j=i+1;j<n-1;j++)
			if (KhoangCach(a[i], a[j]) < KhoangCach(P, Q))
			{
				P = a[i];
				Q = a[j];
			}
	cout << "Hai diem gan nhau nhat la: ";
	Xuat(P);
	Xuat(Q);
}