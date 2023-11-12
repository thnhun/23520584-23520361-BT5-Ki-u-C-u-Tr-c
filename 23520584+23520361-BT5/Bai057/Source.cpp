#include <iostream>
#include <cmath>

using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO &);
void Xuat(PHANSO);
void QuiDongTu(PHANSO &, PHANSO &);

int main()
{
	PHANSO ps1, ps2;

	cout << "Nhap phan so thu nhat:\n";
	Nhap(ps1);
	cout << "Nhap phan so thu hai:\n";
	Nhap(ps2);

	QuiDongTu(ps1, ps2);

	cout << "Ket qua sau khi qui dong:\n";

	cout << "Phan so thu nhat: ";
	Xuat(ps1);
	cout << "Phan so thu hai: ";
	Xuat(ps2);

	return 0;
}

void Nhap(PHANSO &x)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Xuat(PHANSO x)
{
	cout << x.Tu << "/" << x.Mau << endl;
}

void QuiDongTu(PHANSO &x, PHANSO &y)
{
	int tc = x.Tu * y.Tu;
	x.Mau = x.Mau * y.Tu;
	y.Mau = y.Mau * x.Tu;
	x.Tu = tc;
	y.Tu = tc;
}