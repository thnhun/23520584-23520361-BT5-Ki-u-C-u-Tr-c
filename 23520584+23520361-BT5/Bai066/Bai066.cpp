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
SOPHUC Tong(SOPHUC, SOPHUC);

int main()
{
	SOPHUC A, B;
	cout << "\nNhap so phuc 1:";
	Nhap(A);
	cout << "\nNhap so phuc 2:";
	Nhap(B);
	cout << "\nSo phuc 1:";
	Xuat(A);
	cout << "\nSo phuc 2:";
	Xuat(B);
	SOPHUC C = Tong(A, B);
	cout << "\nTong hai so phuc la : ";
	Xuat(C);
	return 1;
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

SOPHUC Tong(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.Thuc = x.Thuc + y.Thuc;
	temp.Ao = x.Ao + y.Ao;
	return temp; 
}
