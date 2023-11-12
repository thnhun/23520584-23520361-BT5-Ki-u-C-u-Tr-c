#include <iostream>
using namespace std;
struct donthuc {
	float a;
	int n;
};
typedef struct donthuc DONTHUC;
void Nhap(DONTHUC&, DONTHUC&);
DONTHUC Tich(DONTHUC, DONTHUC);
void Xuat(DONTHUC);
int main() {
	DONTHUC A, B;
	Nhap(A, B);
	cout << "Thuong 2 don thuc la: ";
	Xuat(Tich(A, B));
	return 1;
}
void Nhap(DONTHUC& x, DONTHUC& y) {
	cout << "Nhap he so 1: ";
	cin >> x.a;
	cout << "Nhap so mu 1: ";
	cin >> x.n;
	cout << "Nhap he so 2: ";
	cin >> y.a;
	cout << "Nhap so mu 2: ";
	cin >> y.n;
}
DONTHUC Tich(DONTHUC x, DONTHUC y) {
	DONTHUC temp;
	temp.a = x.a / y.a;
	temp.n = x.n - y.n;
	return temp;
}
void Xuat(DONTHUC x) {
	cout << "\nHe so: " << x.a;
	cout << "\nSo mu: " << x.n;
}