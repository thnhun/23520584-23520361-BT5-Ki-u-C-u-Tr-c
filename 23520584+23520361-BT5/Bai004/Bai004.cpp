#include <iostream>
#include<iomanip>
#include <string>
using namespace std;

struct LuanVan
{
	string Maso;
	string TenLuanVan;
	string HoTenSV;
	string HoTenGV;
	int Nam;
};
typedef struct LuanVan LUANVAN;

void Nhap(LUANVAN&);
void Xuat(LUANVAN);

int main()
{
	LUANVAN lv;
	Nhap(lv);
	Xuat(lv);
	return 0;
}

void Xuat(LUANVAN x)
{
	cout << "Ma luan van: " << x.Maso << endl;
	cout << "Ten luan van: " << x.TenLuanVan << endl;
	cout << "Ho ten sinh vien: " << x.HoTenSV << endl;
	cout << "Ho ten giao vien: " << x.HoTenGV << endl;
	cout << "Nam thuc hien: " << x.Nam << endl;
}
void Nhap(LUANVAN& x)
{
	cout << "Ma luan van: ";
	getline(cin, x.Maso);
	cout << "Ten luan van: ";
	getline(cin, x.TenLuanVan);
	cout << "Ho ten sinh vien: ";
	getline(cin, x.HoTenSV);
	cout << "Ho ten giao vien: ";
	getline(cin, x.HoTenGV);
	cout << "Nam thuc hien: ";
	cin >> x.Nam;
}