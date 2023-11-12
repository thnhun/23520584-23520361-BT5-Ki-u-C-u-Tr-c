#include <iostream>
#include <cmath>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct duongtron
{
	DIEM I;
	float R;
};
typedef struct duongtron DUONGTRON;

int ktTiepXucOy(DUONGTRON c);
int KiemTra(DUONGTRON a[], int n);

int main()
{
	int n;
	DUONGTRON arr[100];
	cout << "Nhap so luong duong tron: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "Nhap thong tin duong tron thu " << i + 1 << ":\n";
		cout << "Nhap toa do tam (x, y): ";
		cin >> arr[i].I.x >> arr[i].I.y;
		cout << "Nhap ban kinh: ";
		cin >> arr[i].R;
	}

	cout << "Cac duong tron:\n";
	for (int i = 0; i < n; i++)
	{
		cout << "Duong tron thu " << i + 1 << ": Tam (" << arr[i].I.x << ", " << arr[i].I.y << "), Ban kinh: " << arr[i].R << endl;
	}

	if (KiemTra(arr, n) == 1)
	{
		cout << "Co duong tron tiep xuc voi truc tung.\n";
	}
	else
	{
		cout << "Khong co duong tron tiep xuc voi truc tung.\n";
	}

	return 0;
}

int ktTiepXucOy(DUONGTRON c)
{
	if (abs(c.I.x) == c.R)
	{
		return 1;
	}
	return 0;
}

int KiemTra(DUONGTRON a[], int n)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
	{
		if (ktTiepXucOy(a[i]) == 1)
		{
			flag = 1;
		}
	}
	return flag;
}