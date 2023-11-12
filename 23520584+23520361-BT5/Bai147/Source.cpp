#include <iostream>

using namespace std;

struct DUONGTHANG
{
	float a;
	float b;
	float c;
};

typedef struct DUONGTHANG DUONGTHANG;

// Function prototypes
void Nhap(DUONGTHANG &);
void Xuat(DUONGTHANG);

int main()
{
	DUONGTHANG dt;
	Nhap(dt);
	Xuat(dt);
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

void Xuat(DUONGTHANG d)
{
	cout << "\na: " << d.a;
	cout << "\nb: " << d.b;
	cout << "\nc: " << d.c;
}