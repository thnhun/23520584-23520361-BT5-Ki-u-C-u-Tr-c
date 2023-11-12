#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
struct sophuc
{
	float thuc;
	float ao;
};
typedef struct sophuc SOPHUC;
void Nhap(SOPHUC& p)
{
	cout << "Nhap phan thuc:";
	cin >> p.thuc;
	cout << "Nhap phan ao:";
	cin >> p.ao;
}
void NhapMang(SOPHUC a[],int n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}
SOPHUC DauTien(SOPHUC a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i].thuc > 0 && a[i].ao > 0)
			return a[i];
	SOPHUC lc = { 0,0 };
	return lc;
}
int main()
{
    SOPHUC mangSophuc[100];
    int n;
    NhapMang(mangSophuc, n);
    SOPHUC sophucDauTien = DauTien(mangSophuc, n);
    if (sophucDauTien.thuc == 0 && sophucDauTien.ao == 0)
        cout << "Khong co so phuc thoa man dieu kien.\n";
    else
        cout << "So phuc dau tien thoa man dieu kien: (" << sophucDauTien.thuc << ", " << sophucDauTien.ao << ")\n";
    return 0;
}