#include <iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
float KhoangCachGoc(DIEM);
int main()
{
	DIEM n;
	Nhap(n);
	cout << "\nDiem vua nhap:";
	float a = KhoangCachGoc(n);
	Xuat(n);
	cout << "\nKhoang cach goc: " << a;
}

void Nhap(DIEM& P)
{
	cout << "Nhap hoanh do: ";
	cin >> P.x;
	cout << "Nhap tung do: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "\nHoanh do: " << P.x;
	cout << "\nTung do: " << P.y;
}

float KhoangCachGoc(DIEM P)
{
	return sqrt(P.x * P.x + P.y * P.y);
}