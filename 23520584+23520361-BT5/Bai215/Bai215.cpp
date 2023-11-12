#include<iostream>
using namespace std;
#include <iostream>
using namespace std;
struct ngay {
	int ng;
	int th;
	int nm;
};
typedef struct ngay NGAY;
void Nhap(NGAY&);
void Nhap(NGAY[], int&);
void Xuat(NGAY);
void Xuat(NGAY[], int);
int main() {
	NGAY a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	return 1;
}
void Nhap(NGAY& x) {
	cout << "Nhap ngay: ";
	cin >> x.ng;
	cout << "Nhap thang: ";
	cin >> x.th;
	cout << "Nhap nam: ";
	cin >> x.nm;
}
void Nhap(NGAY a[], int& n) {
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Nhap ngay A[" << i << "]:";
		Nhap(a[i]);
	}
}
void Xuat(NGAY x) {
	cout << x.ng << "/" << x.th << "/" << x.nm;
}
void Xuat(NGAY a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Ngay A[" << i << "]:";
		Xuat(a[i]);
		cout << endl;
	}
}