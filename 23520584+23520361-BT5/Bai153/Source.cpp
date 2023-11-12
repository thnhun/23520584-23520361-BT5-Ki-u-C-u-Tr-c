#include <iostream>
using namespace std;

struct DUONGTHANG
{
	float a;
	float b;
	float c;
};
typedef struct DUONGTHANG DUONGTHANG;

void Nhap(DUONGTHANG &);
int ktCat(DUONGTHANG, DUONGTHANG);

int main()
{
	DUONGTHANG dt1, dt2;
	Nhap(dt1);
	Nhap(dt2);

	if (ktCat(dt1, dt2))
	{
		cout << "Hai duong thang cat nhau\n";
	}
	else
	{
		cout << "Hai duong thang khong cat nhau\n";
	}

	return 0;
}

void Nhap(DUONGTHANG &d)
{
	cout << "Nhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}

int ktCat(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	if (D != 0)
		return 1;
	return 0;
}