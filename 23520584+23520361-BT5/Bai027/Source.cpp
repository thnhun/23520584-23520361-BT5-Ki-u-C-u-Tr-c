#include <iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM &);
int ktThuoc1(DIEM);
void Xuat(DIEM);

int main()
{
	DIEM p;
	cout << "\nNhap toa do:\n";
	Nhap(p);
	int result = ktThuoc1(p);
	if (result == 1)
		cout << "\nDiem thuoc phan tu thu I";
	else
		cout << "\nDiem khong thuoc phan tu thu I";
	return 1;
}

void Nhap(DIEM &P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

int ktThuoc1(DIEM P)
{
	if (P.x > 0 && P.y > 0)
		return 1;
	return 0;
}