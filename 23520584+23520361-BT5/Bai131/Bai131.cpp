#include <iostream>
#include <cmath>
using namespace std;
struct diem {
	float x;
	float y;
	float z;
};
typedef struct diem DIEM;
struct duongthang {
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;
struct hinhcau {
	DIEM I;
	float R;
};
typedef struct hinhcau HINHCAU;
void Nhap(HINHCAU&);
void Nhap(DIEM&);
float DienTich(HINHCAU);
int main() {
	HINHCAU A;
	Nhap(A);
	cout << endl;
	cout << "Dien tich xq hinh cua la: ";
	cout << DienTich(A);
	return 1;
}
void Nhap(DIEM& P) {
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}
void Nhap(HINHCAU& c) {
	cout << "Nhap tam: \n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}
float DienTich(HINHCAU c) {
	return float(4 * 3.14 * c.R * c.R);
}