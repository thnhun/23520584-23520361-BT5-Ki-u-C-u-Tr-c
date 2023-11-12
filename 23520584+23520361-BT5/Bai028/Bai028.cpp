#include<iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
int kt(DIEM);

int main()
{
	DIEM a;
	Nhap(a);
	Xuat(a);
	cout << endl;
	cout << kt(a);

	return 0;
}
void Nhap(DIEM& a)
{
	cout << "Nhap x: ";
	cin >> a.x;
	cout << "Nhap y: ";
	cin >> a.y;
}
void Xuat(DIEM a)
{
	cout << "Toa do la: " << a.x << ", " << a.y;
}
int kt(DIEM a)
{
	if (a.x < 0 && a.y>0)
		return 1;
	else
		return 0;
}