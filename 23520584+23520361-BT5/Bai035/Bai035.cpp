#include <iostream>
using namespace std;
struct diemkhonggian {
	float x;
	float y;
	float z;
};
typedef struct diemkhonggian DIEMKHONGGIAN;
void Nhap(DIEMKHONGGIAN&, DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN, DIEMKHONGGIAN);
float KhoangCachX(DIEMKHONGGIAN, DIEMKHONGGIAN);
int main() {
	DIEMKHONGGIAN P, Q;
	Nhap(P, Q);
	Xuat(P, Q); 
	cout << endl;
	cout << " Khoang cach giua P va Q trong kgian theo x la : " << KhoangCachX(P, Q);
	return 1;
}
void Nhap(DIEMKHONGGIAN& P, DIEMKHONGGIAN& Q) {
	cout << "Nhap Px: ";
	cin >> P.x;
	cout << "Nhap Py: ";
	cin >> P.y;
	cout << "Nhap Pz: ";
	cin >> P.z;
	cout << "Nhap Qx: ";
	cin >> Q.x;
	cout << "Nhap Qy: ";
	cin >> Q.y;
	cout << "Nhap Qz: ";
	cin >> Q.z;
}
void Xuat(DIEMKHONGGIAN P, DIEMKHONGGIAN Q) {
	cout << "\nPx: " << P.x;
	cout << "\nPy: " << P.y;
	cout << "\nPz: " << P.z;
	cout << "\nQx: " << Q.x;
	cout << "\nQy: " << Q.y;
	cout << "\nQz: " << Q.z;
}
float KhoangCachX(DIEMKHONGGIAN P, DIEMKHONGGIAN Q) {
	return abs(Q.x - P.x);
}