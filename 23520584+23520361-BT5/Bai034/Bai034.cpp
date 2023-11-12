#include<iostream>
#include <cmath>
using namespace std;

struct Diem
{
	float x;
	float y;
	float z;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
float Tinh(DIEM, DIEM);

int main()
{
	DIEM A;
	Nhap(A);
	Xuat(A);
	cout << endl;
	DIEM B;
	Nhap(B);
	Xuat(B);

	cout << "\nKhoang cach giua 2 diem la: " << Tinh(A, B);

	return 0;
}
void Nhap(DIEM& a)
{
	cout << "Nhap hoanh do: ";
	cin >> a.x;
	cout << "Nhap tung do: ";
	cin >> a.y;
	cout << "Nhap cao do: ";
	cin >> a.z;
}
void Xuat(DIEM a)
{
	cout << "Toa do la: " << a.x << ", " << a.y << ", " << a.z;
}
float Tinh(DIEM a, DIEM b)
{
	return sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2) + pow((a.z - b.z), 2));
}