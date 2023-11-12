#include <iostream>
using namespace std;
struct diem {
	float x;
	float y;
};
typedef struct diem DIEM;
void Nhap(DIEM[], int&);
void Nhap(DIEM);
int main() {
	DIEM A[100];
	int n;
	Nhap(A, n);
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