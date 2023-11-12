#include <iostream>
using namespace std;
struct diem {
	float x;
	float y;
};
typedef struct diem DIEM;
struct duongthang {
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;
void Nhap(DUONGTHANG&, DIEM&);
int ktThuoc(DUONGTHANG, DIEM);
int main() {
	DUONGTHANG A;
	DIEM P;
	Nhap(A, P);
	if (ktThuoc(A, P) == 1)
		cout << "Diem thuoc duong thang";
	if (ktThuoc(A, P) == 0)
		cout << "Diem ko thuoc duong thang: ";
	return 1;
}
void Nhap(DUONGTHANG& d, DIEM& p) {
	cout << "Nhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
	cout << "Nhap x: ";
	cin >> p.x;
	cout << "Nhap y: ";
	cin >> p.y;
}
int ktThuoc(DUONGTHANG d, DIEM p) {
	if ((d.a * p.x + d.b * p.y + d.c) == 0)
		return 1;
	return 0;
}