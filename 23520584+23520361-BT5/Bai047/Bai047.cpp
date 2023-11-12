#include <iostream>
using namespace std;
struct phanso {
	int Tu;
	int Mau;
};
typedef struct phanso PHANSO;
void Nhap(PHANSO&);
void Xuat(PHANSO);
void RutGon(PHANSO&);
int main() {
	PHANSO A;
	Nhap(A);
	Xuat(A);
	cout << endl;
	RutGon(A);
	Xuat(A);
	return 1;
}
void Nhap(PHANSO& x) {
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}
void Xuat(PHANSO x) {
	cout << "\nTu: " << x.Tu;
	cout << "\nMau: " << x.Mau;
}
int UCLN(int a, int b) {
	a = abs(a);
	b = abs(b);
	while (a * b != 0) {
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a + b;
}
void RutGon(PHANSO& x) {
	int kq = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
}