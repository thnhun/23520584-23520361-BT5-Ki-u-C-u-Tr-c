#include <iostream>
using namespace std;
struct sophuc {
	float Thuc;
	float Ao;
};
typedef struct sophuc SOPHUC;
void Nhap(SOPHUC&);
void Xuat(SOPHUC);
int main() {
	SOPHUC P;
	Nhap(P);
	Xuat(P);
	return 1;
}
void Nhap(SOPHUC& x) {
	cout << "Nhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}
void Xuat(SOPHUC x) {
	cout << "\nPhan thuc: " << x.Thuc;
	cout << "\nPhan ao: " << x.Ao;
}