#include <iostream>
#include <iomanip>

using namespace std;

struct ThoiGian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct ThoiGian THOIGIAN;

void Nhap(THOIGIAN &);
THOIGIAN TruocDo(THOIGIAN &);
void Xuat(THOIGIAN);

int main()
{
	THOIGIAN t;
	Nhap(t);
	TruocDo(t);
	Xuat(t);
	return 0;
}

void Nhap(THOIGIAN &x)
{
	cout << "Nhap gio: ";
	cin >> x.Gio;
	cout << "Nhap phut: ";
	cin >> x.Phut;
	cout << "Nhap giay: ";
	cin >> x.Giay;
}

THOIGIAN TruocDo(THOIGIAN &x)
{
	x.Giay--;
	if (x.Giay < 0)
	{
		x.Phut--;
		if (x.Phut < 0)
		{
			x.Gio--;
			if (x.Gio < 0)
			{
				x.Gio = 23;
			}
			x.Phut = 59;
		}
		x.Giay = 59;
	}
	return x;
}

void Xuat(THOIGIAN x)
{
	cout << "\nGio: " << x.Gio;
	cout << "\nPhut: " << x.Phut;
	cout << "\nGiay: " << x.Giay;
}