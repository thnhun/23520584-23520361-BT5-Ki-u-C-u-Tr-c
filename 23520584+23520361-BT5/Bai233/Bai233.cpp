#include <iostream>
using namespace std;
struct phanso {
	int Tu;
	int Mau;
};
typedef struct phanso PHANSO;
void Nhap(PHANSO&);
void Nhap(PHANSO[][100], int&, int&);
void LietKe(PHANSO[][100], int m, int n);
int main() {
	PHANSO a[100][100];
	int m, n;
	Nhap(a, m, n);
	LietKe(a, m, n);
	return 1;
}
void Nhap(PHANSO& x) {
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}
void Nhap(PHANSO a[][100], int& m, int& n) {
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++) {
			cout << "Nhap a[" << i << "][" << j << "]:\n";
			Nhap(a[i][j]);
		}
}
void HoanVi(PHANSO& x, PHANSO& y) {
	PHANSO temp = x;
	x = y;
	y = temp;
}
int UCLN(int &a, int &b) {
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
		if (a > b)
			a = a - b;
		else
			b = b - a;
	return a + b;
}
int ktToiGian(PHANSO x) {
	if (UCLN(x.Tu, x.Mau) == 1)
		return 1;
	return 0;
}
void SapTang(PHANSO a[], int n) {
	float t = (float)a[0].Tu/a[0].Mau;
	for (int i = 1; i < n; i++) {
		float x = (float)a[i].Tu / a[i].Mau;
		if (x < t)
			t = x;
	}
}
void Xuat(PHANSO x) {
	cout << x.Tu << "/" << x.Mau << " ";
}
void Xuat(PHANSO a[], int n) {
	for (int i = 0; i < n; i++) {
		Xuat(a[i]);
	}
}
void LietKe(PHANSO a[][100], int m, int n) {
	PHANSO b[100];
	int k = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; i < n; j++)
			if (ktToiGian(a[i][j]))
				b[k++] = a[i][j];
	SapTang(b, k);
	Xuat(b, k);
}