#include<iostream>
using namespace std;

struct Ngay
{
	int  ngay;
	int thang;
	int  nam;
};
typedef struct Ngay  NGAY;

void Nhap(NGAY&);
void Nhap(NGAY[], int);

int main()
{
	NGAY a[100];
	int n;
	cout << "Nhap so luong ngay: ";
	cin >> n;
	Nhap(a, n);
	return 0;
}
void Nhap(NGAY& x)
{
	cout << "\nNhap ngay:  ";
	cin >> x.ngay;
	cout << "Nhap thang: ";
	cin >> x.thang;
	cout << "Nhap nam: ";
	cin >> x.nam;
}
void Nhap(NGAY a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Ngay thu " << i + 1 << " la: ";
		Nhap(a[i]);
	}
}