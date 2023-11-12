#include<iostream>
#include<cmath>
using namespace std;

struct Tam
{
	float x;
	float y;
};
typedef struct Tam TAM;

struct Duongtron
{
	TAM I;
	double R;
};
typedef struct Duongtron DUONGTRON;

void Nhap(TAM&);
void Nhap(DUONGTRON[], int);
double KhoangCach(TAM, TAM);
double TongBanKinh2DT(double, double);
int ktDoiMotCatNhau(DUONGTRON[], int);

int main()
{
	DUONGTRON a[100];
	int n;
	cout << "Nhap so luong duong tron: ";
	cin >> n;
	Nhap(a, n);
	cout << "Ket qua la: " << ktDoiMotCatNhau(a, n);
	return 0;
}
void Nhap(TAM& a)
{
	cout << "\nNhap x: ";
	cin >> a.x;
	cout << "Nhap y: ";
	cin >> a.y;
}
void Nhap(DUONGTRON a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Duong tron thu " << i + 1 << " la: ";
		cout << "\nNhap tam I: ";
		Nhap(a[i].I);
		cout << "Nhap ban kinh: ";
		cin >> a[i].R;
	}
}
double KhoangCach(TAM P, TAM Q)
{
	return sqrt(pow((P.x - Q.x), 2) + pow((P.y - Q.y), 2));
}
double TongBanKinh2DT(double a, double b)
{
	return a + b;
}
int ktDoiMotCatNhau(DUONGTRON a[], int n)
{
	int flag = 1;
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
		{
			if (TongBanKinh2DT(a[i].R, a[j].R) < KhoangCach(a[i].I, a[j].I))
				flag = 0;
		}
	return flag;
}