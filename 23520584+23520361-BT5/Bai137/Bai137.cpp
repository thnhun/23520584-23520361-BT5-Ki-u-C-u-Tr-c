#include <iostream>
using namespace std;
struct diem {
	float x;
	float y;
};
typedef struct diem DIEM;
struct tamgiac {
	DIEM A;
	DIEM B;
	DIEM C;
};
typedef struct tamgiac TAMGIAC;
void Nhap(TAMGIAC&);
void Nhap(DIEM&);
void Xuat(TAMGIAC);
void Xuat(DIEM);
int main() {
	TAMGIAC P;
	Nhap(P);
	Xuat(P);
	return 1;
}
void Nhap(DIEM& x) {
	cout << "Nhap x: ";
	cin >> x.x;
	cout << "Nhap y: ";
	cin >> x.y;
}
void Nhap(TAMGIAC& t){
	cout << "Nhap dinh A: ";
	Nhap(t.A);
	cout << "Nhap dinh B: ";
	Nhap(t.B);
	cout << "Nhap dinh C: ";
	Nhap(t.C);
}
void Xuat(DIEM x){
	cout << "\nx: " << x.x;
	cout << "\ny: " << x.y;
}
void Xuat(TAMGIAC t) {
	cout << "\nToa do dinh A: ";
	Xuat(t.A);
	cout << "\nToa do dinh B: ";
	Xuat(t.B);
	cout << "\nToa do dinh C: ";
	Xuat(t.C);
}