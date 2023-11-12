#include<iostream>
#include<string>
using namespace std;

struct ToaDo
{
	float x;
	float y;
};
typedef struct ToaDo TOADO;

void Nhap(TOADO&);
void Xuat(TOADO);
TOADO DoiXungHoanh(TOADO);

int main()
{
	TOADO a;
	Nhap(a);
	Xuat(a);

	TOADO doixung = DoiXungHoanh(a);

	cout << "\nToa do doi xung la: " << doixung.x << ", " << doixung.y;
	return 0;
}

void Nhap(TOADO& a)
{
	cout << "Nhap x: ";
	cin >> a.x;
	cout << "Nhap y: ";
	cin >> a.y;
}
void Xuat(TOADO a)
{
	cout << "Toa do diem la: " << a.x << ", " << a.y;
}
TOADO DoiXungHoanh(TOADO a)
{
	TOADO temp;
	temp.x = a.x;
	temp.y = -a.y;
	return temp;
}