#include <iostream>
using namespace std;
#include <iostream>
#include <iomanip>
using namespace std;
struct DaThuc {
	float a[100];
	int n;
};
typedef struct DaThuc DATHUC;
void Nhap(DATHUC&, float&);
float TinhGiaTri(DATHUC, float);
int main() {
	DATHUC A;
	float x0;
	Nhap(A,x0);
	cout << "Gia tri cua da thuc tai x0 la: " << TinhGiaTri(A, x0);
	return 1;
}
void Nhap(DATHUC &f, float& x0){
	cout << "Nhap bac da thuc: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--) {
		cout << "Nhap he so a[" << i << "]: ";
		cin >> f.a[i];
	}
	cout << "Nhap x0: ";
	cin >> x0;
}
float TinhGiaTri(DATHUC f, float x0) {
	float t = 0;
	for (int i = f.n; i >= 0; i--)
		t =t+ f.a[i] * (float)pow(x0, i);
	return t;
}