#include <iostream>
#include <iomanip>
using namespace std;
struct DaThuc {
	float a[100];
	int n;
};
typedef struct DaThuc DATHUC;
void Nhap(DATHUC&, DATHUC &);
void Xuat(DATHUC);
DATHUC Hieu(DATHUC, DATHUC);
int main() {
	DATHUC A, B;
	Nhap(A, B);
	cout << "Hieu 2 da thuc la: ";
	Xuat(Hieu(A, B));
	return 1;
}
void Nhap(DATHUC& a, DATHUC& b) {
	cout << "Nhap bac da thuc 1: ";
	cin >> a.n;
	for (int i = a.n; i >= 0; i--) {
		cout << "Nhap he so a[" << i << "]: ";
		cin >> a.a[i];
	}
	cout << "Nhap bac da thuc 2: ";
	cin >> b.n;
	for (int i = b.n; i >= 0; i--) {
		cout << "Nhap he so a[" << i << "]: ";
		cin >> b.a[i];
	}
}
void Xuat(DATHUC f) {
	cout << setw(6);
	cout << setprecision(3);
	for (int i = f.n; i >= 1; i--) {
		cout << f.a[i];
		cout << "x^" << i;
		cout << " ";
		cout << setprecision(3);
	}
	cout << f.a[0];
}

DATHUC Hieu(DATHUC P, DATHUC Q)
{
	DATHUC R;
	R.n = P.n > Q.n ? P.n : Q.n;
	for (int i = 0; i <= R.n; i++)
		if (i <= P.n && i <= Q.n)
			R.a[i] = P.a[i] - Q.a[i];
		else 
			R.a[i] = i <= P.n ? P.a[i] : Q.a[i];
	if (P.n < Q.n){
		for (int i = R.n; i > P.n; i--)
			R.a[i] = -Q.a[i];
		}
	return R;
}