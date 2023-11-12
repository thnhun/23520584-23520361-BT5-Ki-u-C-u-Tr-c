#include<iostream>
using namespace std;

struct Dt
{
	float a;
	float b;
	float c;
};
typedef struct Dt DT;

void Nhap(DT[], int);
int ktSongSong(DT[], int);

int main()
{
	DT a[100];
	int n;
	cout << "Nhap so duong thang: ";
	cin >> n;
	Nhap(a, n);
	cout << ktSongSong(a, n);
	return 0;
}
void Nhap(DT x[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Duong thang thu " << i + 1 << " la: ";
		cout << "\nNhap a: ";
		cin >> x[i].a;
		cout << "Nhap b: ";
		cin >> x[i].b;
		cout << "Nhap c: ";
		cin >> x[i].c;
	}
}
int ktSongSong(DT a[], int n) 
{
	for (int i = 1; i < n; i++)
		if ((a[i].a / -a[i].b == a[0].a / -a[0].b) && (a[i].c != a[0].c))
			return 1;
	return 0;
}