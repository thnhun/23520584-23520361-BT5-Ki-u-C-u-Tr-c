#include<iostream>
using namespace std;

struct Dinh
{
	float x;
	float y;
};
typedef struct Dinh DINH;

struct Tamgiac
{
	DINH A;
	DINH B;
	DINH C;
};
typedef struct Tamgiac TAMGIAC;

void Nhap(DINH&);
void Xuat(DINH);
void Nhap(TAMGIAC&);
void Xuat(TAMGIAC);

int main()
{
	DINH a, b, c;
	TAMGIAC d;
	Nhap(d);
	Xuat(d);
	return 0;
}
void Nhap(DINH& a)
{
	cout << "\nNhap x: ";
	cin >> a.x;
	cout << "Nhap y: ";
	cin >> a.y;
}
void Xuat(DINH a)
{
	cout << "(" << a.x << ", " << a.y << ")" << endl;
}
void Nhap(TAMGIAC& a)
{
	cout << "Dinh A: ";
	Nhap(a.A);
	cout << "Dinh B: ";
	Nhap(a.B);
	cout << "Dinh C: ";
	Nhap(a.C);
}
void Xuat(TAMGIAC a)
{
	Xuat(a.A);
	Xuat(a.B);
	Xuat(a.C);
}