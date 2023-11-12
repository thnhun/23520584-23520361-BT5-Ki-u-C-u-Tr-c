#include <iostream>
using namespace std;

struct DIEMKHONGGIAN
{
	float x;
	float y;
	float z;
};
typedef struct DIEMKHONGGIAN DIEMKHONGGIAN;

struct HINHCAU
{
	DIEMKHONGGIAN I;
	float R;
};
typedef struct HINHCAU HINHCAU;

void Nhap(DIEMKHONGGIAN &);
void Nhap(HINHCAU &);
void Xuat(DIEMKHONGGIAN);
void Xuat(HINHCAU);

int main()
{
	HINHCAU hc;
	Nhap(hc);
	Xuat(hc);
	return 0;
}

void Nhap(DIEMKHONGGIAN &d)
{
	cout << "Nhap hoanh do: ";
	cin >> d.x;
	cout << "Nhap tung do: ";
	cin >> d.y;
	cout << "Nhap cao do: ";
	cin >> d.z;
}

void Nhap(HINHCAU &c)
{
	cout << "Nhap tam:\n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}

void Xuat(DIEMKHONGGIAN d)
{
	cout << "(" << d.x << ", " << d.y << ", " << d.z << ")";
}

void Xuat(HINHCAU c)
{
	cout << "\nTam:";
	Xuat(c.I);
	cout << "\nBan kinh: " << c.R;
}