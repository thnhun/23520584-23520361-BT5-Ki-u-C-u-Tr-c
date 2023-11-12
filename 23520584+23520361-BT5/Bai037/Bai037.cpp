#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

struct diem
{
	float x;
	float y;
	float z;

};

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
	float kcc = kc(A, B);
	cout << "\n" << kcc;
	return 0;
}

void nhap(diem& a)
{
	cout << "\nNhap x: ";
	cin >> a.x;
	cout << "\nNhap y: ";
	cin >> a.y;
	cout << "\nNhap z: ";
	cin >> a.z;
}

void xuat(diem a)
{
	cout << setw(5) << setprecision(4) << "(" << a.x << "," << a.y << "," << a.z << ")";
}

float kc(diem a, diem b)
{
	return abs(a.z - b.z);
}