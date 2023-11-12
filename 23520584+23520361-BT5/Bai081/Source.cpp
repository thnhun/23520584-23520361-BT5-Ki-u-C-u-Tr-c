#include <iostream>
#include <iomanip>

using namespace std;

struct HonSo
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct HonSo HONSO;

void Nhap(HONSO &, HONSO &);
void QuiDongTu(HONSO &, HONSO &);
void Xuat(HONSO, HONSO);

int main()
{
	HONSO hs1, hs2;

	Nhap(hs1, hs2);
	QuiDongTu(hs1, hs2);
	Xuat(hs1, hs2);

	return 0;
}

void Nhap(HONSO &x, HONSO &y)
{
	cout << "Nhap hon so thu nhat:\n";

	cout << "Nhap nguyen: ";
	cin >> x.Nguyen;
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;

	cout << "Nhap hon so thu hai:\n";

	cout << "Nhap nguyen: ";
	cin >> y.Nguyen;
	cout << "Nhap tu: ";
	cin >> y.Tu;
	cout << "Nhap mau: ";
	cin >> y.Mau;
}

void QuiDongTu(HONSO &x, HONSO &y)
{
	int tc = x.Tu * y.Tu;
	x.Mau = x.Mau * y.Tu;
	y.Mau = y.Mau * x.Tu;
	x.Tu = tc;
	y.Tu = tc;
}

void Xuat(HONSO x, HONSO y)
{
	cout << "\nSau khi qui dong:\n";

	cout << "Hon so thu nhat:";
	cout << "\nNguyen: " << x.Nguyen;
	cout << "\nTu: " << x.Tu;
	cout << "\nMau: " << x.Mau;

	cout << "\nHon so thu hai:";
	cout << "\nNguyen: " << y.Nguyen;
	cout << "\nTu: " << y.Tu;
	cout << "\nMau: " << y.Mau;
}