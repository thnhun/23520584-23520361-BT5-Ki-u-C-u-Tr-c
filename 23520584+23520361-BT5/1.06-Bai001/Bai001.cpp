#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

struct Tinh
{
	int MaSo;
	string TenTinh;
	int DanSo;
	float DienTich;
};
typedef struct Tinh tinh;

void Nhap(tinh&);
void Xuat(tinh);

int main()
{
	tinh t;
	Nhap(t);
	Xuat(t);
	return 0;
}

void Nhap(tinh& x)
{
	cout << "Nhap ma so: ";
	cin >> x.MaSo;
	cout << "\nNhap ten tinh: ";
	cin >> x.TenTinh;
	cout << "\nNhap dan so: ";
	cin >> x.DanSo;
	cout << "\nNhap dien tich: ";
	cin >> x.DienTich;
}

void Xuat(tinh x)
{
	cout << "Ma tinh: " << x.MaSo << endl;
	cout << "Ten tinh: " << x.TenTinh << endl;
	cout << "Dan so: " << x.DanSo << endl;
	cout << "Dien tich: " << x.DienTich << endl;
}