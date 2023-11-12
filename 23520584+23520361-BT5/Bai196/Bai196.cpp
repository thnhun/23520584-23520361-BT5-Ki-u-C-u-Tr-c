#include<iostream>
using namespace std;
 
struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct Duongtron
{
	DIEM I;
	float R;
};
typedef struct Duongtron DUONGTRON;

void Nhap(DIEM&);
void Nhap(DUONGTRON&);
void Nhap(DUONGTRON[], int&);

int main()
{
	DUONGTRON a[100];
	int n;
	Nhap(a, n);
	return 0;
}
void Nhap(DIEM& a)
{
    cout << "Nhap x: ";
    cin >> a.x;
    cout << "Nhap y: ";
    cin >> a.y;
}
void Nhap(DUONGTRON& a)
{
    cout << "Nhap tam cua duong tron:\n";
    Nhap(a.I);
    cout << "Nhap ban kinh cua duong tron: ";
    cin >> a.R;
}

void Nhap(DUONGTRON a[], int& n)
{
    cout << "Nhap so duong tron: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Duong tron thu " << i + 1 << " la:\n";
        Nhap(a[i]);
    }
}