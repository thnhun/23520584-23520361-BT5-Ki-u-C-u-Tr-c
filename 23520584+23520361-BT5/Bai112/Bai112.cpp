#include<iostream>
using namespace std;

struct DonThuc
{
	float a;
	int n;

};
typedef struct DonThuc DONTHUC;

void Nhap(DONTHUC&);
DONTHUC Tich(DONTHUC, DONTHUC);

int main()
{
	DONTHUC a, b;
	Nhap(a);
	Nhap(b);
	DONTHUC kq = Tich(a, b);
	cout << "Ket qua la: " << kq.a<<"*x^" << kq.n;
	return 0;
}
void Nhap(DONTHUC& x)
{
	cout << "Nhap he so: ";
	cin >> x.a;
	cout << "Nhap so mu: ";
	cin >> x.n;
}
DONTHUC Tich(DONTHUC x, DONTHUC y)
{
	DONTHUC temp;
	temp.a = x.a * y.a;
	temp.n = x.n + y.n;
	return temp;
}