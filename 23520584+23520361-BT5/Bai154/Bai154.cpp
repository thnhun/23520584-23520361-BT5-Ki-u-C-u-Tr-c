#include<iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct Dt
{
	float a;
	float b;
	float c;
};
typedef struct Dt DT;

void Nhap(DIEM&);
void Nhap(DT&);
void Xuat(DIEM);
void Xuat(DT);
DIEM GiaoDiem(DT, DT);

int main()
{
	DT d1, d2;
	Nhap(d1);
	Nhap(d2);

	DIEM kq = GiaoDiem(d1, d2);
	cout << "Ket qua la: (" << kq.x << ", " << kq.y << ")";
	return 0;
}

void Nhap(DT& x)
{
	cout << "Nhap a: ";
	cin >> x.a;
	cout << "Nhap b: ";
	cin >> x.b;
	cout << "Nhap c: ";
	cin >> x.c;
}
DIEM GiaoDiem(DT d1, DT d2)
{
	float D = (d1.a * d2.b) - (d2.a* d2.b);
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	float Dy = -d1.a * d2.c + d2.a * d1.c;

	DIEM temp;
	temp.x = Dx / D;
	temp.y = Dy / D;
	return temp;
}