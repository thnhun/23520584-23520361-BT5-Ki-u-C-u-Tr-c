#include <iostream>
using namespace std;
struct Diem {
	float x;
	float y;
};
typedef struct Diem DIEM;
void Nhap(DIEM&, DIEM&);
void Xuat(DIEM, DIEM);
float KhoangCach(DIEM, DIEM);
int main() {
	DIEM P, Q;
	Nhap(P, Q);
	Xuat(P, Q);
	cout << "Khoang cach 2 diem la: ";
	cout << KhoangCach(P, Q);
	return 1;
}
void Nhap(DIEM& P, DIEM& Q) {
	cout << "Nhap Px: ";
	cin >> P.x;
	cout << "Nhap Py: ";
	cin >> P.y;
	cout << "Nhap Qx: ";
	cin >> Q.x;
	cout << "Nhap Qy: ";
	cin >> Q.y;
}
void Xuat(DIEM P, DIEM Q) {
	cout << "\nPx: " << P.x;
	cout << "\nPy: " << P.y;
	cout << "\nQx: " << Q.x;
	cout << "\nQy: " << Q.y;
	cout << endl;
}
float KhoangCach(DIEM P, DIEM Q) {
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}