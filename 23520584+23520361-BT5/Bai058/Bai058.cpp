#include<iostream>
using namespace std;

struct Phanso
{
	float tu;
	float mau;
};
typedef struct Phanso PHANSO;

void Nhap(PHANSO&);
int Sosanh(PHANSO, PHANSO);

int main()
{
	PHANSO a;
	Nhap(a);
	
	PHANSO b;
	Nhap(b);

	cout << Sosanh(a, b);
}
void Nhap(PHANSO& x)
{
	cout << "Nhap tu: ";
	cin >> x.tu;
	cout << "Nhap mau: ";
	cin >> x.mau;
}
int Sosanh(PHANSO x, PHANSO y)
{
	float a = (float)x.tu / x.mau;
	float b = (float)y.tu / y.mau;
	if (a > b)
		return 1;
	else
	{
		if (a < b)
			return -1;
	}
	return 0;
}