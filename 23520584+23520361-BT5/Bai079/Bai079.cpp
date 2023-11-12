#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

struct honso
{
	int nguyen;
	int tu;
	int mau;
};

void nhap(honso&);
void xuat(honso);
int ucln(int , int);
bool kt_toigian(honso);

int main()
{
	honso A;
	cout << "\nNhap hon so: ";
	nhap(A);
	xuat(A);
	if (kt_toigian(A) == true)
		cout << "\nLa hon so toi gian";
	else
		cout << "\nKhong la hon so toi gian";
	return 0;
}

void nhap(honso& a)
{
	cout << "\nNhap so nguyen: ";
	cin >> a.nguyen;
	cout << "\nNhap tu: ";
	cin >> a.tu;
	cout << "\nNhap mau:";
	cin >> a.mau;

}

void xuat(honso a)
{
	cout << "\n" << a.nguyen << "(" << a.tu << "/" << a.mau << ")";
}

int ucln(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a + b;
}

bool kt_toigian(honso a)
{
	if (ucln(a.tu, a.mau) == 1 && a.tu / a.mau == 0)
		return 1;
	return 0;
}