#include<iostream>
using namespace std;

struct Phanso
{
	float Tu;
	float Mau;
};
typedef struct Phanso PHANSO;

void Nhap(PHANSO&);
int kt(PHANSO);
void Xuat(PHANSO);

int main()
{
	PHANSO a;
	Nhap(a);
	Xuat(a);
	return 0;
}
void Nhap(PHANSO& x)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}
int kt(PHANSO x)
{
	if (x.Mau != 0)
		return 1;
	return -1;
}
void Xuat(PHANSO a)
{
	if (kt(a) == 1)
		cout << "Phan so co nghia.";
	else
		cout << "Phan so vo nghia";
}