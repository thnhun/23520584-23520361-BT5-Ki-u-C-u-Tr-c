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
int ktDuong(PHANSO x)
{
	if (x.tu * x.mau > 0)
		return 1;

}
int SoSanh(PHANSO x, PHANSO y)
{
	float a = (float)x.tu / x.mau;
	float b = (float)y.tu / y.mau;
	if (a > b)
		return 1;
	if (a < b)
		return -1;
	return 0;
}
PHANSO DuongNhoNhat(PHANSO a[], int n)
{
	if (n == 0)
	{
		PHANSO lc = { -1,1 };
		return lc;
	}
	PHANSO lc = DuongNhoNhat(a, n - 1);
	if (ktDuong(a[n - 1]) == 0)
		return lc;
	if (ktDuong(lc) == 0)
		return a[n - 1];
	if (SoSanh(a[n - 1], lc) == 1)
		lc = a[n - 1];
	return lc;
}
int main()
{
	PHANSO a[100];
	int n;
	Nhap(a, n);
	PHANSO kq = DuongNhoNhat(a, n);
	if (ktDuong(kq))
		cout << "Phan so duong nho nhat: " << kq.tu << "/" << kq.mau << endl;
	return 0;
}