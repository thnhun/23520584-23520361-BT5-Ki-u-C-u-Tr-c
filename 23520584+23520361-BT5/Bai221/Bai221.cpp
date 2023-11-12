#include <iostream>
using namespace std;
struct diem {
	float x;
	float y;
};
typedef struct diem DIEM;
void Nhap(DIEM&);
void Nhap(DIEM[][100], int&, int&);
int TanSuat(DIEM[][100], int, int, DIEM);
int main() {
	DIEM a[100][100];
	DIEM P;
	int m, n;
	Nhap(a, m, n);
	Nhap(P);
	cout << "Tan suat " << TanSuat(a, m, n, P);
	return 1;
}
void Nhap(DIEM& P) {
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}
void Nhap(DIEM a[][100], int& m, int& n) {
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
int ktTrung(DIEM P, DIEM Q) {
	if (P.x == Q.x && P.y == Q.y)
		return 1;
	return 0;
}
int TanSuat(DIEM a[][100], int m, int n, DIEM P) {
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktTrung(a[i][j], P))
				dem++;
	return dem++;
}