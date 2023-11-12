#include<iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
	float z;
};
typedef struct Diem DIEM;

struct DuongTron
{
	DIEM I;
	float R;
};
typedef struct DuongTron DUONGTRON;

void Nhap(DIEM&);
void Nhap(DUONGTRON&);
float KhoangCach(DIEM, DIEM);
bool kt(DUONGTRON, DIEM);

int main()
{
	DUONGTRON c;
	DIEM a;
	Nhap(c);
	Nhap(a);
	if (kt(c, a))
		cout << "co";
	else
		cout << "khong";
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
void  Nhap(DUONGTRON& a)
{
	cout << "Nhap tam:  " << endl;
	Nhap(a.I);
	cout << "Nhap ban kinh r: ";
	cin >> a.R;
}
float KhoangCach(DUONGTRON a, DIEM b)
{
	return sqrt(pow((a.I.x - b.x), 2) + pow((a.I.y - b.y), 2));
}
bool kt(DUONGTRON a, DIEM b)
{
	if (KhoangCach(a, b) <= a.R)
		return true;
	return false;
}