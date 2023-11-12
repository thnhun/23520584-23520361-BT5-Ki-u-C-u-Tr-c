#include<iostream>
using namespace std;

struct Dt
{
	float a;
	float b;
	float c;
};
typedef struct Dt  DT;

void Nhap(DT&);
void Xuat(DT);

int main()
{
	DT d;
	Nhap(d);
	Xuat(d);
	return 0;
}

void Nhap(DT& x)
{
	cout << "a: ";
	cin >> x.a;
	cout << "b: ";
	cin >> x.b;
	cout << "c: ";
	cin >> x.c;

}
void Xuat(DT x)
{
	cout << "d: " << x.a << "x + " << x.b << "y + " << x.c;
}