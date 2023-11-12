#include<iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct donthuc
{
	float a;
	int n;
};
typedef struct donthuc DONTHUC;

void Nhap(DONTHUC&);
void Xuat(DONTHUC);
DONTHUC DaoHam(DONTHUC);

int main()
{
	DONTHUC ff;
	cout << "Nhap don thuc: ";
	Nhap(ff);
	DONTHUC gg = DaoHam(ff);
	cout << "\nDao ham cap 1:";
	Xuat(gg);
    return 1;
}

void Nhap(DONTHUC& f)
{
	cout << "\nNhap he so: ";
	cin >> f.a;
	cout << "Nhap so mu: ";
	cin >> f.n;
}

void Xuat(DONTHUC f)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\n a = " << f.a;
	cout << "\n n = " << f.n;
}

DONTHUC DaoHam(DONTHUC f)
{
	DONTHUC temp;
	temp.a = f.a * f.n;
	temp.n = f.n - 1;
	return temp;
}

