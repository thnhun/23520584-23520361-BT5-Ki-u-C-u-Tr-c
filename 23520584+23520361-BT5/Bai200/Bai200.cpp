#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;
struct duongtron
{
	float r;
	DIEM I;
};
typedef struct duongtron DUONGTRON;
void Nhap(DIEM& p)
{
	cout << "Nhap toa do x duong tron:";
	cin >> p.x;
	cout << "Nhap toa do y duong tron:";
	cin >> p.y;
}
void NhapMang(DUONGTRON a[], int& n)
{
	cout << "Nhap so duong tron: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap duong tron thu " << i + 1 << ":\n";
		cout << "Nhap ban kinh r: ";
		cin >> a[i].r;
		cout << "Nhap toa do tam I:\n";
		Nhap(a[i].I);
	}
}
float KhoangCachOx(DUONGTRON c)
{
	if (abs(c.I.y) < c.r)
		return 0;
	return abs(abs(c.I.y) - c.r);
}
DUONGTRON ganOxNhat(DUONGTRON a[], int n)
{
	DUONGTRON lc = a[0];
	for (int i = 0; i < n; i++)
		if (KhoangCachOx(a[i]) < KhoangCachOx(lc))
			lc = a[i];
		return lc;
}
int main()
{
	DUONGTRON mangDuongTron[100];
	int n;
	NhapMang(mangDuongTron, n);
	DUONGTRON dtganOxNhat = ganOxNhat(mangDuongTron, n);
	cout << "Duong tron gan Ox nhat:";
	cout << "Ban kinh:" << dtganOxNhat.r;
	cout << "Toa do tam I:" << dtganOxNhat.I.x;
}