#include <iostream>
using namespace std;
struct diem {
	float x;
	float y;
};
typedef struct diem DIEM;
void Nhap(DIEM[], int&);
void Nhap(DIEM);
int DemDiem(DIEM[], int);
int main() {
	DIEM A[100];
	int n;
	Nhap(A, n);
	cout << "so luong phan tu la: " << DemDiem(A, n);
	return 1;
}
void Nhap(DIEM P) {
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}
void Nhap(DIEM a[], int& n) {
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}
int ktTrung(DIEM P, DIEM Q) {
	if (P.x == Q.x && P.y == Q.y)
		return 1;
	return 0;
}
int TanSuat(DIEM a[], int n, DIEM P) {
	int dem = 0;
	for (int i = 1; i < n; i++)
		if (ktTrung(a[i], P) == 1)
			dem++;
	return dem;
}
int DemDiem(DIEM a[], int n) {
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (TanSuat(a, n, a[i]) == 1)
			dem++;
	return dem++;
}