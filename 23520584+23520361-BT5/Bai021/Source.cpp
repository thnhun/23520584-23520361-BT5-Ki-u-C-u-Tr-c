#include <iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM &);
DIEM DoiXungGoc(DIEM);
void Xuat(DIEM);

int main()
{
	DIEM p;
	cout << "\nNhap toa do:\n";
	Nhap(p);
	DIEM result = DoiXungGoc(p);
	Xuat(result);
	return 1;
}

void Nhap(DIEM &P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

DIEM DoiXungGoc(DIEM P)
{
	DIEM temp;
	temp.x = -P.x;
	temp.y = -P.y;
	return temp;
}

void Xuat(DIEM P)
{
	cout << "\nToa do x: " << P.x;
	cout << "\nToa do y: " << P.y;
}