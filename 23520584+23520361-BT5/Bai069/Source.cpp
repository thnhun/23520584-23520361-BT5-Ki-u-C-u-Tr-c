#include <iostream>
#include <iomanip>

using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC &);
SOPHUC Thuong(SOPHUC, SOPHUC);
void Xuat(SOPHUC);

int main()
{
	SOPHUC sp1, sp2, kq;

	cout << "Nhap so phuc thu nhat: ";
	Nhap(sp1);

	cout << "Nhap so phuc thu hai: ";
	Nhap(sp2);

	kq = Thuong(sp1, sp2);
	cout << "Thuong hai so phuc: ";
	Xuat(kq);

	return 0;
}

void Nhap(SOPHUC &x)
{
	cout << "\nNhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}

SOPHUC Thuong(SOPHUC x, SOPHUC y)
{
	float mc = y.Thuc * y.Thuc + y.Ao * y.Ao;
	SOPHUC temp;
	temp.Thuc = (x.Thuc * y.Thuc + x.Ao * y.Ao) / mc;
	temp.Ao = (x.Ao * y.Thuc - x.Thuc * y.Ao) / mc;
	return temp;
}

void Xuat(SOPHUC x)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nThuc: " << x.Thuc;
	cout << "\nAo: " << x.Ao;
}