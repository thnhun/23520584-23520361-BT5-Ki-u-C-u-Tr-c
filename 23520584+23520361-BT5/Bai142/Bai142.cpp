#include<iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct Tamgiac
{
	DIEM A;
	DIEM B;
	DIEM C;
};
typedef struct Tamgiac TAMGIAC;

void Nhap(DIEM&);
void Nhap(TAMGIAC&);
DIEM HoanhLonNhat(TAMGIAC);
void Xuat(DIEM);

int main()
{
	DIEM a;
	TAMGIAC b;
	Nhap(b);
	DIEM kq = HoanhLonNhat(b);
	Xuat(kq);
	return 0;
}
void Nhap(DIEM& a)
{
	cout << "\nNhap x: ";
	cin >> a.x;
	cout << "Nhap y: ";
	cin >> a.y;
}
void Nhap(TAMGIAC& a)
{
	cout << "Nhap A: ";
	Nhap(a.A);
	cout << "Nhap B: ";
	Nhap(a.B);
	cout << "Nhap C: ";
	Nhap(a.C);
}
DIEM HoanhLonNhat(TAMGIAC a)
{
	DIEM max = a.A;
	if (a.A.x < a.B.x)
		max = a.B;
	if (a.B.x < a.C.x)
		max = a.C;
	return max;
}
void Xuat(DIEM a)
{
	cout << "Ket qua la: " << a.x << ", " << a.y;
}