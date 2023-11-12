#include <iostream>
using namespace std;
struct honso {
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct honso HONSO;
void Nhap(HONSO&, HONSO&);
void Xuat(HONSO);
void RutGon(HONSO&);
HONSO Tich(HONSO, HONSO);
int main() {
	HONSO A, B;
	Nhap(A, B);
	cout << endl;
	cout << "Tich hai hon so la: ";
	Xuat(Tich(A, B));
	return 1;
}
void Nhap(HONSO& x, HONSO& y) {
	cout << "Nhap nguyen 1: ";
	cin >> x.Nguyen;
	cout << "Nhap tu 1: ";
	cin >> x.Tu;
	cout << "Nhap mau 1: ";
	cin >> x.Mau;
	cout << "Nhap nguyen 2: ";
	cin >> y.Nguyen;
	cout << "Nhap tu 2: ";
	cin >> y.Tu;
	cout << "Nhap mau 2: ";
	cin >> y.Mau;
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
void RutGon(HONSO& x) {
	int kq = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
	x.Nguyen = x.Nguyen + x.Tu / x.Mau;
	x.Tu = x.Tu % x.Mau;
}
void Xuat(HONSO x) {
	cout << "\nphan nguyen cua tich la: " << x.Nguyen;
	cout << "\nphan tu cua tich la: " << x.Tu;
	cout << "\nphan tu cua mau la" << x.Mau;
}
HONSO Tich(HONSO x, HONSO y) {
	x.Tu = x.Nguyen * x.Mau + x.Tu;
	x.Nguyen = 0;
	y.Tu = y.Nguyen * y.Mau + y.Tu;
	y.Nguyen = 0;
	HONSO temp;
	temp.Tu = x.Tu * y.Tu;
	temp.Mau = x.Mau * y.Mau;
	temp.Nguyen = 0;
	RutGon(temp);
	return temp;
}