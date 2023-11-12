#include<iostream>
#include<iomanip>
using namespace std;

struct DaThuc
{
	int n;
	float a[100];
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC&);
void Xuat(DATHUC);
DATHUC Tich(DATHUC, DATHUC);

int main()
{
	DATHUC a, b, tich;
	cout << "Nhap da thuc thu nhat:\n";
	Nhap(a);

	cout << "\nNhap da thuc thu hai:\n";
	Nhap(b);
	tich= Tich(a, b);
	cout << "\nTich cua hai da thuc la:\n";
	Xuat(tich);

	return 0;
}
void Nhap(DATHUC& f)
{
	cout << "Nhap n: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> f.a[i];
	}
}

void Xuat(DATHUC f)
{
	for (int i = f.n; i >= 1; i--)
	{
		cout << setw(8) << "(" << f.a[i] << ")";
		cout << "x^" << i << " + ";
	}
	cout << setw(8) << "(" << f.a[0] << ") ";
}

DATHUC Tich(DATHUC f, DATHUC g)
{
	DATHUC temp;
	temp.n = f.n + g.n;
	for (int i = temp.n; i >= 0; i--)
		temp.a[i] = 0;
	for (int i = 0; i <= g.n; i++)
		for (int j = 0; j <= f.n; j++)
		   temp.a[i + j] += g.a[i] * f.a[j];
	 return temp;
}
