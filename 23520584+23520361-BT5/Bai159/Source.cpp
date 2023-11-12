#include <iostream>
#include <iomanip>
using namespace std;

struct DaThuc
{
	int n;
	float a[100];
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC &);
void Xuat(DATHUC);
void DieuChinhBac(DATHUC &);

int main()
{
	DATHUC p;
	Nhap(p);
	DieuChinhBac(p);
	Xuat(p);
	return 0;
}

void Nhap(DATHUC &f)
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
		cout << setw(1) << "(" << f.a[i] << ")";
		cout << "x^" << i << " + ";
	}
	cout << setw(1) << "(" << f.a[0] << ") ";
}

void DieuChinhBac(DATHUC &f)
{
	while (f.n > 0 && f.a[f.n] == 0)
	{
		f.n--;
	}
}