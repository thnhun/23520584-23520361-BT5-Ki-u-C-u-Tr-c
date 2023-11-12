#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct diemkhonggian
{
	float x;
	float y;
	float z;
};
typedef struct diemkhonggian DIEMKHONGGIAN;

struct hinhcau
{
	DIEMKHONGGIAN I;
	float R;
};
typedef struct hinhcau HINHCAU;
void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);

void Nhap(HINHCAU&);
void Xuat(HINHCAU);
float TheTich(HINHCAU);

int main()
{
	DIEMKHONGGIAN M;
	HINHCAU hc;
	
	cout << "Nhap hinh cau: ";
	Nhap(hc);
	cout << "Nhap diem M: ";
	Nhap(M);
	
	float kq = TheTich(hc);
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nThe tich hinh cau: " << kq;
    return 1;
}

void Nhap(DIEMKHONGGIAN& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}

void Nhap(HINHCAU& C)
{
	cout << "\nNhap tam I:";
	Nhap(C.I);
	cout << "Nhap R:";
	cin >> C.R;
}

float TheTich(HINHCAU C)
{
	return ((float(4) / 3) * 3.14 * pow(C.R, 3));
}

