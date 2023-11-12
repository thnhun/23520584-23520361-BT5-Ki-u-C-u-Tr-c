#include<iostream>
#include<iomanip>
using namespace std;

struct ngay
{
	int ngay;
	int thang;
	int nam;
};
typedef struct ngay Ngay;

void Nhap(ngay&);
void Xuat(ngay);

int main()
{
	ngay x;
	Nhap(x);
	Xuat(x);
	return 0;
}

void Nhap(ngay& x)
{
	cout << "Nhap ngay: ";
	cin >> x.ngay;
	cout << "Nhap thang: ";
	cin >> x.thang;
	cout << "Nhap nam: ";
	cin >> x.nam;
}

void Xuat(ngay x)
{
	cout << setw(8);
	cout << "\nNgay = " << x.ngay;
	cout << "\nThang = " << x.thang;
	cout << "\nNam = " << x.nam;
}