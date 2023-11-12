#include <iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
	float z;
};
typedef struct Diem DIEM;

void Nhap(DIEM &);
void Xuat(DIEM);

int main()
{
	DIEM p;
	cout << "\nNhap toa do:\n";
	Nhap(p);
	Xuat(p);
	return 1;
}

void Nhap(DIEM &P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}

void Xuat(DIEM P)
{
	cout << "\nToa do x: " << P.x;
	cout << "\nToa do y: " << P.y;
	cout << "\nToa do z: " << P.z;
}