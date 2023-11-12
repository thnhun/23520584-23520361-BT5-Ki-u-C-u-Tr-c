#include <iostream>
#include <cmath>
using namespace std;
struct diem {
	float x;
	float y;
};
typedef struct diem DIEM;
struct duongthang {
	float a;
	float b;
};
typedef struct duongthang DUONGTHANG;
struct duongtron {
	DIEM I;
	float R;
};
typedef struct duongtron DUONGTRON;
void Nhap(DUONGTRON&, DIEM &);
void Nhap(DIEM&);
float KhoangCach(DUONGTRON, DIEM);
int TuongDoi(DUONGTRON, DIEM);
int main(){
	DUONGTRON C;
	DIEM P;
	Nhap(C, P);
	if (C.R != 0) {
		if (TuongDoi(C, P) == 2)
			cout << "Ngoai duong tron";
		if (TuongDoi(C, P) == 0)
			cout << "Trong duong tron";
		if (TuongDoi(C, P) == 1)
			cout << "Tren duong tron";
	}
	return 1;
}
void Nhap(DIEM& P) {
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}
void Nhap(DUONGTRON& c, DIEM& P) {
	cout << "Nhap tam: \n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
	cout << "Nhap diem: ";
	Nhap(P);
}
float KhoangCach(DIEM f, DIEM n) {
	return sqrt((f.x - n.x) * (f.x - n.x) + (f.y - n.y) * (f.y - n.y));
}
int TuongDoi(DUONGTRON c, DIEM P) {
	float kc = KhoangCach(c.I, P);
	if (kc > c.R)
		return 2;
	if (kc < c.R)
		return 0;
	return 1;
}