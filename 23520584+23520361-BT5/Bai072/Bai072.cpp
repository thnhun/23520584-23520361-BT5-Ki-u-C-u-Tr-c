#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct HonSo
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct HonSo HONSO;
void Nhap(HONSO&);

int main()
{
	HONSO A;
	cout << "\nNhap hon so :";
	Nhap(A);
	return 0;
}

void Nhap(HONSO &x)
{
	cout << "\nNhap nguyen: ";
	cin >> x.Nguyen;
	cout << "\nNhap tu: ";
	cin >> x.Tu;
	cout << "\nNhap mau: ";
	cin >> x.Mau;
}