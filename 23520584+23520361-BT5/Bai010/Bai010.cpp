#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

struct Tinh
{
	int MaSo;
	string TenTinh;
	int DanSo;
	int DienTich;
};
typedef struct Tinh TINH;

void Nhap(TINH&);
void Xuat(TINH);

void Nhap(TINH[], int&);
void Xuat(TINH[], int);

int main()
{
	TINH b[100];
	int n;
	Nhap(b, n);
	Xuat(b, n);

	//cau a
	cout << "\nTinh co dan so tren 1000000: " << endl;
	for (int i = 0; i < n; i++)
	{
		if (b[i].DanSo > 1000000)
			Xuat(b[i]);
	}

	//cau b
	cout << "\nTinh co dien tich lon nhat: " << endl;
	int max = b[0].DienTich;
	for (int i = 0; i < n; i++)
	{
		if (b[i].DienTich > max)
		{
			max = b[i].DienTich;
		}
		Xuat (b[i]);
	}
	//cau c
	for (int i = 0; i < n; i++)
	{
		if (b[i].DienTich < b[i + 1].DienTich)
			SapXep(b[i].DienTich, b[i + 1].DienTich);
		Xuat(b[i]);
	}

	return 0;
}

void Nhap(TINH& x)
{
	cout << "Ma so tinh: ";
	cin >> x.MaSo;
	cout << "Ten Tinh: ";
	cin.ignore();
	getline(cin, x.TenTinh);
	cout << "Dan So: ";
	cin >> x.DanSo;
	cout << "DienTich: ";
	cin >> x.DienTich;
}
void Xuat(TINH x)
{
	cout << "Ma so tinh: " << x.MaSo << endl;
	cout << "Ten Tinh: " << x.TenTinh << endl;
	cout << "Dan So: " << x.DanSo << endl;
	cout << "Dien Tich: " << x.DienTich << endl;
}
void Nhap(TINH a[], int& n)
{
	cout << "Nhap so luong tinh: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nTinh thu " << i + 1 << " la:\n";
		Nhap(a[i]);
	}
}
void Xuat(TINH a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nTinh thu " << i + 1 << ":\n";
		Xuat(a[i]);
	}
}
void SapXep(int a, int b)
{

	int temp = a;
	a = b;
	b = temp;
}