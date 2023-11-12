#include <iostream>
#include <cmath>
using namespace std;

struct DIEM
{
	float x;
	float y;
};

float KhoangCachGoc(DIEM P);
DIEM GanGocNhat(DIEM a[], int n);
void Nhap(DIEM &P);
void Xuat(DIEM P);

int main()
{
	int n;
	cout << "Nhap so luong diem: ";
	cin >> n;
	DIEM *arr = new DIEM[n];

	for (int i = 0; i < n; i++)
	{
		cout << "Nhap thong tin diem " << i + 1 << ":\n";
		Nhap(arr[i]);
	}

	DIEM diemGanGocNhat = GanGocNhat(arr, n);
	cout << "Diem gan goc nhat:\n";
	Xuat(diemGanGocNhat);
	delete[] arr;
	return 0;
}

float KhoangCachGoc(DIEM P)
{
	return sqrt(P.x * P.x + P.y * P.y);
}

DIEM GanGocNhat(DIEM a[], int n)
{
	DIEM lc = a[0];
	for (int i = 0; i <= n - 1; i++)
		if (KhoangCachGoc(a[i]) < KhoangCachGoc(lc))
			lc = a[i];
	return lc;
}

void Nhap(DIEM &P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "Toa do: (" << P.x << ", " << P.y << ")\n";
}
