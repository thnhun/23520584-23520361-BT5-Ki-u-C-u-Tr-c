#include <iostream>
using namespace std;

struct PhanSo
{
	float Tu;
	float Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO &);

int main()
{
	PHANSO M;
	cout << "\nNhap phan so:\n";
	Nhap(M);
	return 1;
}

void Nhap(PHANSO &x)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}
