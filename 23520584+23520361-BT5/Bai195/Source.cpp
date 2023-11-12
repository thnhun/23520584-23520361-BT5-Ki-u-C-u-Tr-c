#include <iostream>
using namespace std;

struct sophuc
{
	float Thuc;
	float Ao;
};
typedef struct sophuc SOPHUC;

void Nhap(SOPHUC[], int &);
void Xuat(SOPHUC[], int);
void HoanVi(SOPHUC &, SOPHUC &);
void SapTang(SOPHUC[], int);

int main()
{
	int n;
	SOPHUC arr[100];
	Nhap(arr, n);
	SapTang(arr, n);
	cout << "Mang sau khi sap xep tang theo phan thuc:\n";
	Xuat(arr, n);
	return 0;
}

void Nhap(SOPHUC a[], int &n)
{
	cout << "Nhap so luong so phuc: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "Nhap so phuc thu " << i + 1 << ":\n";
		cout << "Nhap phan thuc: ";
		cin >> a[i].Thuc;
		cout << "Nhap phan ao: ";
		cin >> a[i].Ao;
	}
}

void Xuat(SOPHUC a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i].Thuc << " + " << a[i].Ao << "i\n";
	}
	cout << endl;
}

void HoanVi(SOPHUC &x, SOPHUC &y)
{
	SOPHUC temp = x;
	x = y;
	y = temp;
}

void SapTang(SOPHUC a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
	{
		for (int j = i + 1; j <= n - 1; j++)
		{
			if (a[i].Thuc > a[j].Thuc)
			{
				HoanVi(a[i], a[j]);
			}
		}
	}
}