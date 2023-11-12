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
void LietKe(DUONGTRON[], int);
void Xuat(DUONGTRON[], int);
void Xuat(DUONGTRON);
int main() {
	DUONGTRON a[100];
	int n;
	Nhap(a, n);
	LietKe(a, n);
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
float KhoangCach(DIEM P, DIEM Q) {
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}
int TuongDoi(DUONGTRON c1, DUONGTRON c2) {
	float kc = KhoangCach(c1.I, c2.I);
	if (kc == 0 && c1.R == c2.R)
		return 0;
	if (kc > (c1.R + c2.R))
		return 1;
	if (kc == (c1.R + c2.R))
		return 2;
	if (kc<(c1.R + c2.R) && kc>abs(c1.R - c2.R))
		return 3;
	if (kc == abs(c1.R - c2.R))
		return 4;
	return 5;
}
void LietKe(DUONGTRON a[], int n) {
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (TuongDoi(a[i], a[j]) == 2 || TuongDoi(a[i], a[j]) == 4){
				Xuat(a[i]);
				Xuat(a[j]);
			}
}