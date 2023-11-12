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

int main()
{
	DIEM n;
	Nhap(n);
	cout << "\nDiem vua nhap:";
	Xuat(n);
	return 1;
}

void Nhap(DIEM& f)
{
	cout << "Nhap hoanh do: ";
	cin >> f.x;
	cout << "Nhap tung do: ";
	cin >> f.y;
}

void Xuat(DIEM f)
{
	cout << "\nHoanh do: " << f.x;
	cout << "\nTung do: " << f.y;
}