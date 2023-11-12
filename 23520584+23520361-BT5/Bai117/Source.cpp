#include <iostream>

using namespace std;

struct donthuc
{
	float a;
	int n;
};

typedef struct donthuc DONTHUC;

void Nhap(DONTHUC &f);
void Xuat(DONTHUC f);
DONTHUC operator*(DONTHUC f, DONTHUC g);

int main()
{
	DONTHUC dt1, dt2, dtTich;

	cout << "Nhap don thuc thu nhat:\n";
	Nhap(dt1);

	cout << "Nhap don thuc thu hai:\n";
	Nhap(dt2);

	dtTich = dt1 * dt2;
	cout << "\nTich hai don thuc: ";
	Xuat(dtTich);

	return 0;
}

void Nhap(DONTHUC &f)
{
	cout << "Nhap he so: ";
	cin >> f.a;
	cout << "Nhap so mu: ";
	cin >> f.n;
}

void Xuat(DONTHUC f)
{
	cout << "\nHe so: " << f.a;
	cout << "\nSo mu: " << f.n;
}

DONTHUC operator*(DONTHUC f, DONTHUC g)
{
	DONTHUC temp;
	temp.a = f.a * g.a;
	temp.n = f.n + g.n;
	return temp;
}