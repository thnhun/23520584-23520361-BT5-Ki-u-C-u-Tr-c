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
float KhoangCachX(DIEM, DIEM);

int main()
{
	DIEM P, Q;
	cout << "Nhap toa do diem 1: ";
	Nhap(P);
	cout << "Nhap toa do diem 2: ";
	Nhap(Q);
	cout << "\nToa do diem 1: ";
	Xuat(P);
	cout << "\nToa do diem 2: ";
	Xuat(Q);

	float kq = KhoangCachX(P,Q);
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nKhoang cach hai diem: " << kq;
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

float KhoangCachX(DIEM P, DIEM Q)
{
	return abs(Q.x - P.x);
}