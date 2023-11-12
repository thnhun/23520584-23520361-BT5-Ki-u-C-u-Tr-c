#include <iostream>
using namespace std;
struct Diem {
	float x;
	float y;
};
typedef struct Diem DIEM;
void Nhap(DIEM&);
void Xuat(DIEM);
DIEM DoiXungTung(DIEM);
int main() {
	DIEM P;
	Nhap(P);
	Xuat(P); cout << endl;
	cout << " toa do diem doi xung qua truc tung la: ";
	Xuat(DoiXungTung(P));
	return 1;
}
void Nhap(DIEM& P) {
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}
void Xuat(DIEM P) {
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
}
DIEM DoiXungTung(DIEM P) {
	DIEM temp;
	temp.x = -P.x;
	temp.y = P.y;
	return temp;
}