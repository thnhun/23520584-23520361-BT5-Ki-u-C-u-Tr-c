#include <iostream>
#include <string>
using namespace std;

struct Tam
{
	float x;
	float y;
	float z;
};
typedef struct Tam TAM;

struct HinhCau
{
	TAM I;
	float R;
};
typedef struct HinhCau HINHCAU;

void Nhap(TAM&);
void Xuat(TAM);

void Nhap(HINHCAU&);
void Xuat(HINHCAU);


int main()
{
	TAM I;
	HINHCAU c;
	Nhap(c);
	cout << "\nKhoi cau co: ";
	Xuat(c);
	return 0;
}

void Nhap(TAM& I)
{
	cout << "\nNhap x: ";
	cin >> I.x;
	cout << "Nhap y: ";
	cin >> I.y;
	cout << "Nhap z: ";
	cin >> I.z;
}
void Xuat(TAM I)
{
	cout << "\nTam: " << I.x << ", " << I.y << ", " << I.z << endl;
}
void Nhap(HINHCAU& c)
{
	cout << "Nhap tam hinh cau: ";
	Nhap(c.I);
	cout << "Nhap ban kinh R: ";
	cin >> c.R;
}
void Xuat(HINHCAU c)
{
	Xuat(c.I);
	cout << "Ban kinh: " << c.R;
}
