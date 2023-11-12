#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem Diem;

void nhap(diem& a);
void xuat(diem a);
float kc(diem a, diem b);

int main()
{
	diem A, B;
	cout << "Nhap toa do diem 1: ";
	nhap(A);
	cout << "Nhap toa do diem 2: ";
	nhap(B);
	cout << "\nToa do diem 1: ";
	xuat(A);
	cout << "\nToa do diem 2: ";
	xuat(B);

	float kq = kc(A, B);
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nKhoang cach hai diem: " << kq;
	return 1;
	return 0;
}

void nhap(diem& a)
{
	cout << "\nNhap tu: ";
	cin >> a.x;
	cout << "\nNhap mau: ";
	cin >> a.y;

}

void xuat(diem a)
{
	cout << a.x << "/" << a.y;
}

float kc(diem a, diem b)
{
	return abs(a.y - b.y);
}