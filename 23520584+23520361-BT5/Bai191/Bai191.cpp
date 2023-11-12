#include <iostream>
using namespace std;
struct sophuc {
	float Thuc;
	float Ao;
};
typedef struct sophuc SOPHUC;
void Nhap(SOPHUC[], int&);
void Nhap(SOPHUC&);
int main() {
	SOPHUC a[100];
	int n;
	Nhap(a, n);
	return 1;
}
void Nhap(SOPHUC& a) {
	cout << "Nhap phan thuc: ";
	cin >> a.Thuc;
	cout << "nhap phan ao: ";
	cin >> a.Ao;
}
void Nhap(SOPHUC a[], int& n) {
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]:";
		Nhap(a[i]);
	}
}