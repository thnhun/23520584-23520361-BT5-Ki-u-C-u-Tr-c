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
void QuiDongMau(PHANSO&, PHANSO&);
int main()
{
	PHANSO A, B;
	cout << "Nhap phan so 1:";
	Nhap(A);

	cout << "\nNhap phan so 2:";
	Nhap(B);

	QuiDongMau(A, B);
	cout << "\nPhan so thu 1 2 sau khi qui dong mau la: ";
	Xuat(A);
	Xuat(B);
	return 0;
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

void QuiDongMau(PHANSO& x, PHANSO& y)
{
	float mc = x.Mau * y.Mau;
	x.Tu = x.Tu * y.Mau;
	y.Tu = x.Mau * y.Tu;
	x.Mau = mc;
	y.Mau = mc;
}