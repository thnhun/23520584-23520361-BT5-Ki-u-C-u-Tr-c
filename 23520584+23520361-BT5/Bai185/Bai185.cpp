#include <iostream>
using namespace std;
struct phanso {
	int Tu;
	int Mau;
};
typedef struct phanso PHANSO;
void Nhap(PHANSO[], int&);
void Nhap(PHANSO&);
int SoSanh(PHANSO, PHANSO);
PHANSO LonNhat(PHANSO[], int);
void Xuat(PHANSO);
int main() {
	PHANSO a[100];
	int n;
	Nhap(a, n);
	cout << "Phan so lon nhat la: ";
	Xuat(LonNhat(a, n));
	return 1;
}
void Nhap(PHANSO& a) {
	cout << "Nhap tu: ";
	cin >> a.Tu;
	cout << "Nhap mau: ";
	cin >> a.Mau;
}
void Nhap(PHANSO a[], int& n) {
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]:";
		Nhap(a[i]);
	}
}
int SoSanh(PHANSO a, PHANSO b) {
	float x = (float)a.Tu / a.Mau;
	float y = (float)b.Tu / b.Mau;
	if (x > y)
		return 1;
	if (x < y)
		return -1;
	return 0;
}
PHANSO LonNhat(PHANSO a[], int n) {
	PHANSO lc = a[0];
	for (int i = 0; i <n; i++)
		if (SoSanh(a[i], lc) == 1)
			lc = a[i];
	return lc;
}
void Xuat(PHANSO x) {
	cout << "\nTu: " << x.Tu;
	cout << "\nMau: " << x.Mau;
}