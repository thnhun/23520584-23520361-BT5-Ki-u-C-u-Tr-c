#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

struct ThoiGian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct ThoiGian thoigian;

struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct Ngay ngay;

struct ChuyenBay
{
	string MaSo;
	ngay NgayBay;
	thoigian GioBay;
	string NoiDi;
	string NoiDen;
};
typedef struct ChuyenBay chuyenbay;

void Nhap(ngay&);
void Xuat(ngay);
void Nhap(thoigian&);
void Xuat(thoigian);
void Nhap(chuyenbay&);
void Xuat(ChuyenBay);

int main()
{
	chuyenbay cb;
	Nhap(cb);
	Xuat(cb);
	return 0;
}
void Nhap(ngay& x)
{
	cout << "\nNhap ngay:";
	cin >> x.Ngay;
	cout << "Nhap thang:";
	cin >> x.Thang;
	cout << "Nhap nam:";
	cin >> x.Nam;
}
void Xuat(Ngay x)
{
	cout << "\nNgay: " << x.Ngay << endl;
	cout << "Thang: " << x.Thang << endl;
	cout << "Nam: " << x.Nam << endl;
}
void Nhap(ThoiGian& x)
{
	cout << "\nNhap gio:";
	cin >> x.Gio;
	cout << "Nhap phut:";
	cin >> x.Phut;
	cout << "Nhap giay:";
	cin >> x.Giay;
}
void Xuat(thoigian x)
{
	cout << "Gio: " << x.Gio << endl;
	cout << "Phut: " << x.Phut << endl;
	cout << "Giay: " << x.Giay << endl;
}
void Nhap(chuyenbay& x)
{
	cout << "Nhap ma chuyen bay: ";
	cin >> x.MaSo;
	cout << "Nhap ngay bay: ";
	Nhap(x.NgayBay);
	cout << "Nhap gio bay: ";
	Nhap(x.GioBay);
	cout << "Nhap noi di: ";
	cin >> x.NoiDi;
	cout << "Nhap noi den: ";
	cin >> x.NoiDen;
}
void Xuat(chuyenbay x)
{
	cout << "\nMa chuyen bay: " << x.MaSo << endl;
	cout << "Ngay bay: ";
	Xuat(x.NgayBay);
	cout << "\nGio bay: ";
	Xuat(x.GioBay);
	cout << "Noi di: " << x.NoiDi << endl;
	cout << "Noi den: " << x.NoiDen << endl;
}