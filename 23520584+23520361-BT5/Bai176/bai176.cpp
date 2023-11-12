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
void Nhap(DIEM& p)
{
	cout << "Nhap toa do x:";
	cin >> p.x;
	cout << "Nhap toa do y:";
	cin >> p.y;
}
void Nhap(DIEM a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}
DIEM TungDoMax(DIEM a[], int n)
{
	DIEM diemMax = a[0];
	for (int i = 1; i < n; ++i)
	{
		if (a[i].y > diemMax.y)
		{
			diemMax = a[i];
		}
	}
	return diemMax;
}
int max()
{
	DIEM mangDiem[100];
	int n;
	Nhap(mangDiem, n);
	DIEM diemMax = TungDoMax(mangDiem, n);
	cout << "Diem co tung do lon nhat:(" << diemMax.x << diemMax.y << ")\n";
	return 0;
}