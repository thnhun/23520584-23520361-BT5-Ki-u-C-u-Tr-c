#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
DIEM DoiXungPhanGiac1(DIEM);

int main()
{
	DIEM P;
	cout << "Nhap toa do diem A : ";
	Nhap(P);
	cout << "Toa do diem A : ";
	Xuat(P);
	cout << "\nDiem doi xung voi A qua duong phan giac thu nhat la: ";
	DIEM B = DoiXungPhanGiac1(P);
	Xuat(B);
	return 1;
}

void Nhap(DIEM& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx = " << P.x;
	cout << "\ny = " << P.y;
}

DIEM DoiXungPhanGiac1(DIEM P)
{
	DIEM temp;
	temp.x = P.y;
	temp.y = P.x;
	return temp;
}
