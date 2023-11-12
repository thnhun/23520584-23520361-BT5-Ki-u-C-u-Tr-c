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
struct duongtron {
	DIEM I;
	float R;
};
typedef struct duongtron DUONGTRON;
void Nhap(DUONGTRON[], int&);
void Nhap(DUONGTRON&);
void Xuat(DUONGTRON[], int);
void Xuat(DUONGTRON);
int main() {
	DUONGTRON a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	return 1;
}
void Nhap(DIEM& P) {
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}
void Nhap(DUONGTRON& c) {
	cout << "Nhap tam: \n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}
void Nhap(DUONGTRON a[], int& n) {
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]:";
		Nhap(a[i]);
	}
}
void Xuat(DIEM P) {
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
}
void Xuat(DUONGTRON c) {
	cout << "Tam la :";
	Xuat(c.I); cout << endl;
	cout << "Ban kinh la: " << c.R;
	cout << endl;
}
void Xuat(DUONGTRON a[], int n) {
	for (int i = 0; i < n; i++)
		Xuat(a[i]);
}