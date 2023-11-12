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

int main()
{
	DONTHUC dt;
	Nhap(dt);
	Xuat(dt);

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