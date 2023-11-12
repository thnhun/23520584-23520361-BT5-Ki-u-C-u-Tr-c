#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
int ktThuoc4(DIEM);

int main()
{
	DIEM P;
	cout << "Nhap toa do diem A : ";
	Nhap(P);
	cout << "Toa do diem A : ";
	Xuat(P);
	int flag = ktThuoc4(P);
	if (flag == 1)
		cout << "\nDiem vua nhap thuoc phan tu thu IV.";
	else
		cout << "\nDiem vua nhap khong thuoc phan tu thu IV.";
	return 1;
}

void Nhap(DIEM& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx = " << P.x;
	cout << "\ny = " << P.y;
}

int ktThuoc4(DIEM P)
{
	if (P.x > 0 && P.y < 0)
		return 1;
	return 0;
}
