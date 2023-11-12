#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
struct phanso
{
	int tu;
	int mau;
};
typedef struct phanso PHANSO;
void NhapPS(PHANSO& ps)
{
	cout << "Nhap tu:";
	cin >> ps.tu;
	cout << "Nhap mau:";
	cin >> ps.mau;
}
void Xuat(PHANSO& d)
{
	cout << d.tu << "/" << d.mau;
}
void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan so thu " << i + 1 << ":\n";
		NhapPS(a[i]);
	}
}
void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i < n; i++)
		Xuat(a[i]);
}
int main()
{
	PHANSO mangPhanSo[100];
	int sl;
	Nhap(mangPhanSo, sl);
	Xuat(mangPhanSo, sl);
	return 0;
}