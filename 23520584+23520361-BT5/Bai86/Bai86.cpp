#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
struct thoigian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct thoigian THOIGIAN;
void Nhap(THOIGIAN&);
void Xuat(THOIGIAN);

THOIGIAN KeTiep(THOIGIAN);
int main()
{
	THOIGIAN A;
	cout << "Nhap thoi gian: ";
	Nhap(A);
	THOIGIAN B;
	B = KeTiep(A);
	cout << "\nThoi gian ke tiep: ";
	Xuat(B);
	return 1;
}
void Nhap(THOIGIAN& x)
{
	cout << "\nNhap gio: ";
	cin >> x.Gio;
	cout << "Nhap phut: ";
	cin >> x.Phut;
	cout << "Nhap giay: ";
	cin >> x.Giay;
}
void Xuat(THOIGIAN x)
{
	cout << "\nGio: " << x.Gio;
	cout << "\nPhut: " << x.Phut;
	cout << "\nGiay: " << x.Giay;
}
THOIGIAN KeTiep(THOIGIAN x)
{
	THOIGIAN temp = x;
	temp.Giay = x.Giay + 1;
	if (x.Giay > 59)
	{
		temp.Phut = temp.Phut + 1;
		if (temp.Phut > 59)
		{
			temp.Gio = temp.Gio + 1;
			if (temp.Gio > 23)
				temp.Gio = 0;
			temp.Phut = 0;
		}
		temp.Giay = 0;
	}
	return temp;
}