#include<iostream>
#include<iomanip>

using namespace std;

struct dathuc
{
	float a[100];
	int n;
};

void Nhap(dathuc&);
void Xuat(dathuc);

int main()
{
	dathuc ff;
	Nhap(ff);
	Xuat(ff);
	return 0;
}

void Nhap(dathuc& f)
{
	cout << "Nhap bac da thuc: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap he so a[" << i << "]: ";
		cin >> f.a[i];
	}
}

void Xuat(dathuc f)
{	
	for (int i = f.n; i >= 1; i--)
	{
		 cout << f.a[i];
		cout << "x^" << i;
		cout << setw(3);
	}
	cout << f.a[0];
}