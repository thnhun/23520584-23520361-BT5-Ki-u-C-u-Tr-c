#include <iostream>
using namespace std;
struct Diem {
	float x;
	float y;
};
typedef struct Diem DIEM;
struct TamGiac {
	DIEM A;
	DIEM B;
	DIEM C;
};
typedef struct TamGiac TAMGIAC;
void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(TAMGIAC&);
void Xuat(TAMGIAC);
int main() {
	TAMGIAC M;
	Nhap(M);
	cout << "Tam giac vua nhap:" << endl;
	Xuat(M);
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
void Nhap(TAMGIAC& t) {
	cout << "Nhap diem A: " << endl;
	Nhap(t.A);
	cout << "Nhap diem B: " << endl;
	Nhap(t.B);
	cout << "Nhap diem C: " << endl;
	Nhap(t.C);
}
void Xuat(TAMGIAC t) {
	cout << " \nToa do diem A: ";
	Xuat(t.A);
	cout << "\nToa do diem B: ";
	Xuat(t.B);
	cout << "\nToa do diem C: ";
	Xuat(t.C);
}