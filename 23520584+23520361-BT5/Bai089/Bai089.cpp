#include <iostream>
using namespace std;
struct thoigian {
	int Gio;
	int Phut;
	int Giay;
};
typedef struct thoigian THOIGIAN;
void Nhap(THOIGIAN&, THOIGIAN&);
int SoThuTu(THOIGIAN);
int KhoangCach(THOIGIAN, THOIGIAN);
int main() {
	THOIGIAN A, B;
	Nhap(A, B);
	cout << "Khoang cach giua hai thoi gian la: ";
	cout << KhoangCach(A, B);
	return 1;
}
void Nhap(THOIGIAN& x, THOIGIAN& y) {
	cout << "Nhap gio1: ";
	cin >> x.Gio;
	cout << "Nhap phut1: ";
	cin >> x.Phut;
	cout << "Nhap giay1: ";
	cin >> x.Giay;
	cout << "Nhap gio2: ";
	cin >> y.Gio;
	cout << "Nhap phut2: ";
	cin >> y.Phut;
	cout << "Nhap giay2: ";
	cin >> y.Giay;
}
int SoThuTu(THOIGIAN x) {
	return x.Gio * 3600 + x.Phut * 60 + x.Giay;
}
int KhoangCach(THOIGIAN x, THOIGIAN y) {
	int a = SoThuTu(x);
	int b = SoThuTu(y);
	return abs(a - b);
}