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
int SoSanh(THOIGIAN, THOIGIAN);

int main()
{
	THOIGIAN A,B;
	cout << "\nNhap thoi gian 1: ";
	Nhap(A);
	cout << "\nNhap thoi gian 2: ";
	Nhap(B);

	cout << "\nThoi gian 1 la: ";
	Xuat(A);
	cout << "\nThoi gian 2 la : ";
	Xuat(B);
	
	int flag = SoSanh(A, B);
	if (flag == -1)
		cout <<endl<< "Thoi gian 1 nho hon thoi gian 2.";
	else if (flag == 0)
		cout << endl << "Thoi gian 1 bang thoi gian 2.";
	else
		cout << endl << "Thoi gian 1 lon hon thoi gian 2.";
	return 0;
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

int SoSanh(THOIGIAN x, THOIGIAN y)
{
	if (x.Gio > y.Gio)
		return 1;
	if (x.Gio < y.Gio)
		return -1;
	if (x.Phut > y.Phut)
		return 1;
	if (x.Phut < y.Phut)
		return -1;
	if (x.Giay > y.Giay)
		return 1;
	if (x.Giay < y.Giay)
		return -1;
	return 0;
}