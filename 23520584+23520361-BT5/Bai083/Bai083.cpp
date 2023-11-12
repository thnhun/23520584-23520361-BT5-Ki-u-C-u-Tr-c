#include <iostream>
using namespace std;
struct thoigian {
	int Gio;
	int Phut;
	int Giay;
};
typedef struct thoigian THOIGIAN;
void Nhap(THOIGIAN&);
int main() {
	THOIGIAN A;
	Nhap(A);
	return 1;
}
void Nhap(THOIGIAN& x) {
	cout << "Nhap gio: ";
	cin >> x.Gio;
	cout << "Nhap phut: ";
	cin >> x.Phut;
	cout << "Nhap giay: ";
	cin >> x.Giay;
}