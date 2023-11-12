#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

struct date
{
	int ngay;
	int thang;
	int nam;
};
typedef struct date NGAY;

void nhap(date&);
void xuat(date);
void Nhap(NGAY[], int&);
void Xuat(NGAY[], int);
void XaNhauNhat(NGAY[], int, NGAY&, NGAY&);
int KhoangCach(NGAY, NGAY);
int SoThuTu(NGAY);
int SoThuTuTrongNam(NGAY);
int SoNgayToiDaTrongNam(NGAY);
int ktNhuan(NGAY);
int SoNgayToiDaTrongThang(NGAY);

int main()
{
	date a;
	cout << "Nhap date: ";
	nhap(a);
	cout << "Date: ";
	xuat(a);
	return 0;
}

void nhap(date& a)
{
	cout << "\nNhap ngay: ";
	cin >> a.ngay;
	cout << "\nNhap thang: ";
	cin >> a.thang;
	cout << "\nNhap nam:";
	cin >> a.nam;
}

void xuat(date a)
{
	cout << "\n" << a.ngay << "/" << a.thang << "/" << a.nam;
}

void Nhap(NGAY a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap duong thang A[" << i << "]:\n";
		nhap(a[i]);
	}
}

void Xuat(NGAY a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Ngay a[" << i << "]:";
		xuat(a[i]);
		cout << endl;
	}
}

int ktNhuan(NGAY x)
{
	if (x.nam % 4 == 0 && x.nam % 100 != 0)
		return 1;
	if (x.nam % 400 == 0)
		return 1;
	return 0;
}

int SoNgayToiDaTrongNam(NGAY x)
{
	if (ktNhuan(x))
		return 366;
	return 365;
}

int SoNgayToiDaTrongThang(NGAY x)
{
	int ngaythang[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (ktNhuan(x))
		ngaythang[1] = 29;
	return ngaythang[x.thang - 1];
}

int SoThuTuTrongNam(NGAY x)
{
	int stt = 0;
	for (int i = 1;i <= x.thang - 1;i++)
	{
		NGAY temp = { 1,i,x.nam };
		stt += SoNgayToiDaTrongThang(temp);
	}
	return (stt + x.ngay);
}

int SoThuTu(NGAY x)
{
	int stt = 0;
	for (int i = 1;i <= x.nam - 1;i++)
	{
		NGAY temp = { 1,1,i };
		stt = stt + SoNgayToiDaTrongNam(temp);
	}
	return (stt + SoThuTuTrongNam(x));
}

int KhoangCach(NGAY x, NGAY y)
{
	int a = SoThuTu(x);
	int b = SoThuTu(y);
	return abs(a - b);
}

void XaNhauNhat(NGAY a[], int n,NGAY & x, NGAY& y)
{
	x = a[0];
	y = a[1];
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (KhoangCach(a[i], a[j]) >KhoangCach(x, y))
			{
				x = a[i];
				y = a[j];
			}
}