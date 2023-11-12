#include<iostream>
using namespace std;

struct Honso
{
	int nguyen;
	int tu;
	int mau;
};
typedef  struct Honso HONSO;

void Nhap(HONSO&);
void Xuat(HONSO);
HONSO Hieu(HONSO, HONSO);

int  main()
{
	HONSO x, y;
	Nhap(x);// hon so  1
	Nhap(y);// hon so  2
	HONSO kq = Hieu(x, y);
	Xuat(kq);
	return 0;
}
void Nhap(HONSO& x)
{
	cout << "Nhap phan nguyen: ";
	cin >> x.nguyen;
	cout << "Nhap tu: ";
	cin >> x.tu;
	cout << "Nhap mau:  ";
	cin >> x.mau;
}
HONSO Hieu(HONSO a, HONSO b)
{
	HONSO kq;
	kq.nguyen = a.nguyen - b.nguyen;
	kq.tu = a.tu * b.mau - b.tu * a.mau;
	kq.mau = a.mau * b.mau;
	return kq;
}
void Xuat(HONSO kq)
{
	cout << "\nKet qua la: " << kq.nguyen << " + " << kq.tu << "/" << kq.mau;
}