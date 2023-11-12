#include<iostream>
using namespace std;

struct PhanSo
{
	float Tu;
	float Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);

int main()
{
	PHANSO p;
	Nhap(p);
	Xuat(p);
	return 0;
}
void Nhap(PHANSO& a)
{
	cout << "Nhap tu so: ";
	cin >> a.Tu;
	cout << "Nhap mau so: ";
	cin >> a.Mau;
}
void Xuat(PHANSO a)
{
	cout << "Phan so da nhap la: " << a.Tu << "/" << a.Mau;
}
