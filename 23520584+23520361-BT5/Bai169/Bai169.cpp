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

dathuc operatorr(dathuc a, dathuc b)
{
	dathuc c;
	if (a.n > b.n)
	{
		c.n = a.n;
		for (int i = b.n;i >= 0;i--)
			c.a[i] = a.a[i] - b.a[i];
		for (int j = a.n;j > b.n;j--)
			c.a[j] = a.a[j];
	}
	else
	{
		c.n = b.n;
		for (int i = a.n;i >= 0;i--)
			c.a[i] = a.a[i] - b.a[i];
		for (int j = b.n;j > a.n;j--)
			c.a[j] = b.a[j];
	}
	return c;
}

int main()
{
	dathuc a, b, c;
	Nhap(a);
	Xuat(a);
	cout << endl;
	Nhap(b);
	Xuat(b);
	c = operatorr(a, b);
	Xuat(c);
	return 0;
}

