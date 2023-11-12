#include<iostream>
using namespace std;

struct Phanso
{
	float tu;
	float mau;
};
typedef struct Phanso  PHANSO;

void Nhap(PHANSO&);
int Dem(PHANSO[], int);
bool kt(PHANSO[], int);

int main()
{
	PHANSO a[100];
	int n;
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan so thu " << i + 1<<": ";
		Nhap(a[i]);
	}
	cout << "Ket qua  la: " << Dem(a, n);
	return 0;
}
void Nhap(PHANSO& x)
{
	cout << "\nNhap tu: ";
	cin >> x.tu;
	cout << "Nhap mau: ";
	cin >> x.mau;
}
int Dem(PHANSO a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (kt(a, i))
			dem++;
	return dem;
}
bool kt(PHANSO a[], int n)
{
	PHANSO b = { 0,1 };
	for (int i = 0; i < n; i++)
		if (a[i].tu / a[i].mau > b.tu / b.mau)
			return true;
	return false;

}