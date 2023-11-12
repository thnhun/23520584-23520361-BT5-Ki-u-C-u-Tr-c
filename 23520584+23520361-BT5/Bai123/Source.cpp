#include <iostream>

using namespace std;

struct DIEM
{
	float x;
	float y;
};
typedef struct DIEM DIEM;

struct DUONGTRON
{
	DIEM I;
	float R;
};
typedef struct DUONGTRON DUONGTRON;

void Nhap(DIEM &);
void Nhap(DUONGTRON &);
float DienTich(DUONGTRON);
void Xuat(DIEM);
void Xuat(DUONGTRON);

int main()
{
	DUONGTRON dt;
	Nhap(dt);

	cout << "Toa do tam va ban kinh cua duong tron:\n";
	Xuat(dt);

	cout << "\nDien tich duong tron: " << DienTich(dt) << endl;

	return 0;
}

void Nhap(DIEM &d)
{
	cout << "Nhap hoanh do: ";
	cin >> d.x;
	cout << "Nhap tung do: ";
	cin >> d.y;
}

void Nhap(DUONGTRON &c)
{
	cout << "Nhap tam:\n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}

float DienTich(DUONGTRON c)
{
	return float(3.14 * c.R * c.R);
}

void Xuat(DIEM d)
{
	cout << "(" << d.x << ", " << d.y << ")";
}

void Xuat(DUONGTRON c)
{
	cout << "Tam: ";
	Xuat(c.I);
	cout << "\nBan kinh: " << c.R;
}
