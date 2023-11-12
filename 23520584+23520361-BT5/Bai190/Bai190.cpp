#include<iostream>
using namespace std;

struct Phanso
{
	float tu;
	float mau;
};
typedef struct Phanso PHANSO;

void Nhap(PHANSO&);
void SapXep(PHANSO[], int);
void Xuat(PHANSO);
void  HoanVi(PHANSO&, PHANSO&);
bool operator>(PHANSO& a, PHANSO& b)
{
	return (a.tu / a.mau > b.tu / b.mau);
}


int  main()
{
	PHANSO a[100];
	int n;
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan so thu " << i + 1 << ": ";
		Nhap(a[i]);
	}
	SapXep(a, n);
	for (int i = 0; i < n; i++)
		Xuat(a[i]);
	return 0;

}
void Nhap(PHANSO& x)
{
	cout << "\nNhap tu: ";
	cin >> x.tu;
	cout << "Nhap  mau: ";
	cin >> x.mau;
}
void SapXep(PHANSO a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i] > a[j])
				HoanVi(a[i], a[j]);

}
void  HoanVi(PHANSO& a, PHANSO& b)
{
	PHANSO temp = a;
	a = b;
	b = temp;
}
void Xuat(PHANSO x)
{
	cout << x.tu << "/" << x.mau << " ";
}
