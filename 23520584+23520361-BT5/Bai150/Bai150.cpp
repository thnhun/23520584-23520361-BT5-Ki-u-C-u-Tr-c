#include<iostream>
#include<iomanip>
using namespace std;

struct Dt
{
	float a;
	float b;
	float c;
};
typedef struct Dt  DT;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DT&);
void Xuat(DT);
float KhoangCach(DT, DIEM);


int main()
{
	DIEM P;
	cout << "Nhap diem P :" ;
	Nhap(P);
	DT d;
	cout << "Nhap dt d :" << endl;
	Nhap(d);
	Xuat(d);
	cout << "\nKhoang cach tu P de duong thang d la: " << KhoangCach(d, P);
	return 0;
}

void Nhap(DT& x)
{
	cout << "a: ";
	cin >> x.a;
	cout << "b: ";
	cin >> x.b;
	cout << "c: ";
	cin >> x.c;

}
void Xuat(DT x)
{
	cout << "d: " << x.a << "x + " << x.b << "y + " << x.c;
}

void Nhap(DIEM& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx = " << P.x;
	cout << "\ny = " << P.y;
}

float KhoangCach(DT d, DIEM P)
{
	 float tu = abs(d.a * P.x + d.b * P.y + d.c);
	 float mau = sqrt(d.a * d.a + d.b * d.b);
	 return tu / mau;
}