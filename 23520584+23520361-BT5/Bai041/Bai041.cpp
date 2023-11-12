#include <iostream>
using namespace std;
struct diemkhonggian {
	float x;
	float y;
	float z;
};
typedef struct diemkhonggian DIEMKHONGGIAN;
void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);
DIEMKHONGGIAN DoiXungOxz(DIEMKHONGGIAN);
int main() {
	DIEMKHONGGIAN P;
	Nhap(P);
	Xuat(P);
	cout << endl;
	cout << "Toa do diem doi xung qua Oxz la: ";
	Xuat(DoiXungOxz(P));
	return 1;
}
void Nhap(DIEMKHONGGIAN& P) {
	cout << "Nhap Px: ";
	cin >> P.x;
	cout << "Nhap Py: ";
	cin >> P.y;
	cout << "Nhap Pz: ";
	cin >> P.z;
}
void Xuat(DIEMKHONGGIAN P) {
	cout << "\nPx: " << P.x;
	cout << "\nPy: " << P.y;
	cout << "\nPz: " << P.z;
}
DIEMKHONGGIAN DoiXungOxz(DIEMKHONGGIAN P) {
	DIEMKHONGGIAN temp;
	temp.x = P.x;
	temp.y = -P.y;
	temp.z = P.z;
	return temp;
}