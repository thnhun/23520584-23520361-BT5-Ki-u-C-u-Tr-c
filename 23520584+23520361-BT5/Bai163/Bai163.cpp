#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct dathuc
{
	float a[100];
	int n;
};
typedef struct dathuc DATHUC;

void Nhap(DATHUC& f)
{
	cout << "Nhap bac da thuc: ";
	cin >> f.n;
	for (int i = f.n;i >= 0;i--)
	{
		cout << "Nhap he so a[" << i << "]: ";
		cin >> f.a[i];
	}
}

void Xuat(DATHUC f)
{
	cout << setw(6);
	cout << setprecision(3);
	for (int i = f.n;i >= 1;i--)
	{
		cout << f.a[i];
		cout << "x^" << i << "+";
	}
	cout << f.a[0];
}

int main()
{
	dathuc a;
	Nhap(a);
	Xuat(a);
	return 0;
}