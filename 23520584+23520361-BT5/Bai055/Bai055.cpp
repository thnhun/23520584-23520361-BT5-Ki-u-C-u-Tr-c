#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

struct phanso
{
	int tu;
	int mau;
};

void nhap(phanso&);
void xuat(phanso);
bool kt_am(phanso);

int main()
{
	phanso a;
	cout << "\nNhap phan so thu nhat: ";
	nhap(a);
	cout << "\nPhan so thu nhat la: " << endl;
	xuat(a);
	if (kt_am(a) == true)
		cout << "\nLa phan so am" << endl;
	else
		cout << "\nla phan so khong am" << endl;
	return 0;
}

void nhap(phanso& a)
{
	cout << "\nNhap tu: ";
	cin >> a.tu;
	cout << "\nNhap mau: ";
	cin >> a.mau;
}

void xuat(phanso a)
{
	cout << a.tu << "/" << a.mau;
}

bool kt_am(phanso a)
{
	if (a.tu * a.mau < 0)
		return 1;
	return 0;
}