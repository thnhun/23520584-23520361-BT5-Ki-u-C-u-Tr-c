#include<iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef diem Diem;

void Nhap(diem&);
void Xuat(diem);

int main()
{
	diem P;
	Nhap(P);
	Xuat(P);
	return 0;
}

void Nhap(diem& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "nhap y: ";
	cin >> P.y;
}

void Xuat(diem P)
{
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
}