#include <iostream>
#include <cmath>
using namespace std;

struct phanso
{
	int Tu;
	int Mau;
};
typedef struct phanso PHANSO;
void Nhap(PHANSO&);
void Xuat(PHANSO);
int ktDuong(PHANSO);

int main()
{
	PHANSO A;
	cout << "Nhap phan so 1 :";
	Nhap(A);
	cout << "\nPhan so 1 :";
	Xuat(A);
	if (ktDuong(A))
		cout << "\nPhan so 1 duong.";
	else
		cout << "\nPhan so 1 ko duong.";
	return 1;
}

void Nhap(PHANSO& x)
{
	cout << "\nNhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Xuat(PHANSO x)
{
	cout << "\nTu = " << x.Tu;
	cout << "\nMau = " << x.Mau;
}

int ktDuong(PHANSO x)
{
	if (x.Tu * x.Mau > 0)
		return 1;
	return 0;
}