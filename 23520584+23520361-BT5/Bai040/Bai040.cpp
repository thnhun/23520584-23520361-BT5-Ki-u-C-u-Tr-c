#include<iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
	float z;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
DIEM DiemDoiXung(DIEM);

int main()
{
	DIEM p;
	Nhap(p);
	Xuat(p);
	Diem c = DiemDoiXung(p);
	cout << "\nDiem doi xung la: " << c.x << ", " << c.y << ", " << c.z;
	return 0;
}

void Nhap(DIEM& a)
{
	cout << "Nhap x: ";
	cin >> a.x;
	cout << "Nhap y: ";
	cin >> a.y;
	cout << "Nhap z: ";
	cin >> a.z;
}
void Xuat(DIEM a)
{
	cout << "Toa do la: " << a.x << ", " << a.y << ", " << a.z;
}
DIEM DiemDoiXung(DIEM a)
{
	DIEM temp;
	temp.x = a.x;
	temp.y = a.y;
	temp.z = -a.z;
	return temp;
}