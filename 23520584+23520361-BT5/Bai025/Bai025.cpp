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
diem ddxpg2(diem a);

int main()
{
	diem A;
	cout << "Nhap toa do diem 1: ";
	nhap(A);
	cout << "\nToa do diem 1: ";
	xuat(A);
	
	cout << "\nDiem doi xung qua duong phan giac thu 2: " << endl;
	xuat(ddxpg2(A));
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

diem ddxpg2(diem a)
{
	diem b;
	b.x = -a.y;
	b.y = -a.x;
	return b;
}