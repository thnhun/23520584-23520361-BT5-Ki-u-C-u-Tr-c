#include<iostream>
#include<string>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);

int main()
{
	DIEM b;
	Nhap(b);
	Xuat(b);
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
	cout << "Toa do diem la: " << a.x << ", " << a.y;
}