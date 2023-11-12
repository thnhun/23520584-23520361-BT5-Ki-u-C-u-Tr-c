#include <iostream>
using namespace std;

struct PHANSO
{
	int Tu;
	int Mau;
};
typedef struct PHANSO PHANSO;

void Nhap(PHANSO[], int &);
void Xuat(PHANSO[], int);
int TimViTri(PHANSO[], int);
int ktAm(PHANSO);
int SoSanh(PHANSO, PHANSO);

int main()
{
	int n;
	PHANSO arr[100];

	Nhap(arr, n);
	Xuat(arr, n);

	int viTri = TimViTri(arr, n);

	if (viTri == -1)
		cout << "Mang khong co gia tri am.\n";
	else
		cout << "Vi tri gia tri am lon nhat trong mang: " << viTri << endl;
	return 0;
}

void Nhap(PHANSO a[], int &n)
{
	cout << "Nhap so luong phan so: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan so thu " << i + 1 << ":\n";
		cout << "Nhap tu so: ";
		cin >> a[i].Tu;
		cout << "Nhap mau so: ";
		cin >> a[i].Mau;
	}
}

void Xuat(PHANSO a[], int n)
{
	cout << "Cac phan so trong mang:\n";
	for (int i = 0; i < n; i++)
	{
		cout << a[i].Tu << "/" << a[i].Mau << " ";
	}
	cout << endl;
}

int ktAm(PHANSO ps)
{
	return (ps.Tu * ps.Mau);
}

int SoSanh(PHANSO ps1, PHANSO ps2)
{
	int giaTri1 = ps1.Tu * ps2.Mau;
	int giaTri2 = ps2.Tu * ps1.Mau;

	if (giaTri1 < giaTri2)
		return -1;
	else if (giaTri1 > giaTri2)
		return 1;
	else
		return 0;
}

int TimViTri(PHANSO a[], int n)
{
	if (n == 0)
		return -1;

	int lc = TimViTri(a, n - 1);

	if (ktAm(a[n - 1]) == 0)
		return lc;

	if (ktAm(a[lc]) == 0)
		return n - 1;

	if (SoSanh(a[n - 1], a[lc]) == -1)
		lc = n - 1;

	return lc;
}