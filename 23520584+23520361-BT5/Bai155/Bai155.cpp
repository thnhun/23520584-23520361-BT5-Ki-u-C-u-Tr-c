#include <iostream>
#include <iostream>
using namespace std;
struct diem {
	float x;
	float y;
};
typedef struct diem DIEM;
struct duongthang {
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;
void Nhap(DUONGTHANG&, DUONGTHANG&);
int ktVuongGoc(DUONGTHANG, DUONGTHANG);
int main() {
	DUONGTHANG A, B;
	Nhap(A, B);
	if (ktVuongGoc(A, B) == 1)
		cout << "Vuong goc";
	if (ktVuongGoc(A, B) == 0)
		cout << "Ko vuong goc";
	return 1;
}
void Nhap(DUONGTHANG& d1, DUONGTHANG& d2) {
	cout << "Nhap a1: ";
	cin >> d1.a;
	cout << "Nhap b1: ";
	cin >> d1.b;
	cout << "Nhap c1: ";
	cin >> d1.c;
	cout << "Nhap a1: ";
	cin >> d2.a;
	cout << "Nhap b2: ";
	cin >> d2.b;
	cout << "Nhap c2: ";
	cin >> d2.c;
}
int ktVuongGoc(DUONGTHANG d1, DUONGTHANG d2) {
	if ((d1.a * d2.a + d1.b * d2.b) == 0)
		return 1;
	return 0;
}