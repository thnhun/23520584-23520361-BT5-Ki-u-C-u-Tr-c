#include <iostream>
using namespace std;
struct sophuc {
	float Thuc;
	float Ao;
};
typedef struct sophuc SOPHUC;
void Nhap(SOPHUC&);
void Nhap(SOPHUC[][100], int&, int&);
SOPHUC ThucLonNhat(SOPHUC[][100], int, int);
void Xuat(SOPHUC);
int main() {
	SOPHUC a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << "So phuc co phan thuc lon nhat la: ";
	Xuat(ThucLonNhat(a, m, n));
	return 1;
}
void Nhap(SOPHUC& x) {
	cout << "Nhap thuc: ";
	cin >> x.Thuc;
	cout << "Nhap ao: ";
	cin >> x.Ao;
}
void Nhap(SOPHUC a[][100], int& m, int& n) {
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
SOPHUC ThucLonNhat(SOPHUC a[][100], int m, int n) {
	SOPHUC lc = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j].Thuc > lc.Thuc)
				lc = a[i][j];
	return lc;
}
void Xuat(SOPHUC x) {
	cout << "Phan thuc la: " << x.Thuc;
	cout << endl;
	cout << "Phan ao la: " << x.Ao;
}