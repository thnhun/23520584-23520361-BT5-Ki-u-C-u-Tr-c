#include <iostream>
using namespace std;
struct Diem {
	float x;
	float y;
};
typedef struct Diem DIEM;
void Nhap(DIEM&);
void Xuat(DIEM);
int ktThuoc3(DIEM);
int main() {
	DIEM P;
	Nhap(P);
	Xuat(P); cout << endl;
	if (ktThuoc3(P) == 1)
		cout << "Diem thuoc phan tu thu III";
	else
		cout << "Diem ko thuoc phan tu thu III";
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

int ktThuoc3(DIEM P) {
	if (P.x < 0 && P.y < 0)
		return 1;
	return 0;
}