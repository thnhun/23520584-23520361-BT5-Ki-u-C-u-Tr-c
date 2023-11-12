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
bool Trung(diem a, diem b);

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

	if (Trung(A, B) == true)
		cout << "\nDiem 1 trung diem 2";
	else
		cout << "\nDiem 1 khong trung diem 2";

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

bool Trung(diem a, diem b)
{
	if (a.x == b.x && a.y == b.y && a.z == b.z)
		return 1;
	return 0;
}