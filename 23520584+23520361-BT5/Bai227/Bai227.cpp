#include <iostream>;
using namespace std;
struct phanso {
	int Tu;
	int Mau;
};
typedef struct phanso PHANSO;
void Nhap(PHANSO&);
void Nhap(PHANSO[][100], int&, int&);
int main() {
	PHANSO a[100][100];
	int m, n;
	Nhap(a, m, n);
	return 1;
}
void Nhap(PHANSO a[][100], int& m, int& n) {
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for(int i=0; i<m; i++)
		for (int j = 0; j < n; j++) {
			cout << "Nhap a[" << i << "][" << j << "]:\n";
			Nhap(a[i][j]);
		}
}
void Nhap(PHANSO& x) {
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}