#include <iostream>
using namespace std;
struct phanso {
	int Tu;
	int Mau;
};
typedef struct phanso PHANSO;
void Nhap(PHANSO&, PHANSO&);
void Xuat1(PHANSO, PHANSO);
void Xuat2(PHANSO);
PHANSO operator+(PHANSO, PHANSO);
int main() {
	PHANSO A, B;
	Nhap(A, B);
	Xuat1(A, B);
	cout << endl;
	cout << "tong 2 phan so la: ";
	Xuat2(operator+(A, B));
	return 1;
}
void Nhap(PHANSO& x, PHANSO& y) {
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
	cout << "Nhap tu: ";
	cin >> y.Tu;
	cout << "Nhap mau: ";
	cin >> y.Mau;
}
void Xuat1(PHANSO x, PHANSO y) {
	cout << "\nTu cua phan so 1: " << x.Tu;
	cout << "\nMau cua phan so 1: " << x.Mau;
	cout << "\nTu cua phan so 2: " << y.Tu;
	cout << "\nMau cua phan so 2: " << y.Mau;
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
PHANSO operator+(PHANSO x, PHANSO y) {
	PHANSO temp;
	temp.Tu = x.Tu * y.Mau + y.Tu * x.Mau;
	temp.Mau = x.Mau * y.Mau;
	RutGon(temp);
	return temp;
}
void Xuat2(PHANSO x) {
	cout << "\nTu : " << x.Tu;
	cout << "\nMau: " << x.Mau;
}