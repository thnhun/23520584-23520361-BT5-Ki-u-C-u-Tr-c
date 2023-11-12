#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
struct sophuc
{
	float Thuc;
	float Ao;
};
typedef struct sophuc SOPHUC;
void Nhap(SOPHUC&);
void Xuat(SOPHUC);

SOPHUC Tich(SOPHUC, SOPHUC);
int main()
{
	SOPHUC A, B, C;
	cout << "Nhap so phuc 1:";
	Nhap(A);
	cout << "Nhap so phuc 2:";
	Nhap(B);
	cout << "So phuc 1:";
	Xuat(A);
	cout << "So phuc 2:";
	Xuat(B);
	C = Tich(A, B);
	cout << "Tich 2 so phuc la:";
	Xuat(C);
	return 0;
}
void Nhap(SOPHUC& x)
{
	cout << "\nNhap thuc: ";
	cin >> x.Thuc;
	cout << "Nhap ao: ";
	cin >> x.Ao;
}

void Xuat(SOPHUC x)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nThuc = " << x.Thuc;
	cout << "\nAo = " << x.Ao;
}
SOPHUC Tich(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.Thuc = x.Thuc * y.Thuc - x.Ao * y.Ao;
	temp.Ao = x.Thuc * y.Ao + x.Ao * y.Thuc;
	return temp;
}