#include<iostream>
using namespace std;

struct thoigian
{
	int gio;
	int phut;
	int giay;
};
typedef struct thoigian THOIGIAN;

void Nhap(THOIGIAN&);
bool kt(THOIGIAN);
int SoThuTuGiay(THOIGIAN);
void Xuat(THOIGIAN);

int main()
{
	THOIGIAN x;
	Nhap(x);
	if (kt(x))
		cout << "Ket qua la: " << SoThuTuGiay(x);
	else
		cout << "Thoi gian khong hop le.";
	return 0;
}
void Nhap(THOIGIAN& x)
{
	cout << "Nhap gio: ";
	cin >> x.gio;
	cout << "Nhap phut: ";
	cin >> x.phut;
	cout << "Nhap giay: ";
	cin >> x.giay;
}
bool kt(THOIGIAN x)
{
	bool dk1 = (x.gio > 24 || x.gio < 0);
	bool dk2 = (x.phut > 60 || x.phut < 0);
	bool dk3 = (x.giay > 60 || x.giay < 0);
	if (dk1 || dk2 || dk3)
		return false;
	return true;
}
int SoThuTuGiay(THOIGIAN x)
{
	return x.giay + x.phut * 60 + x.gio * 3600;
}