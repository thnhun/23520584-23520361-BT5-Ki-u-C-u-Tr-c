
#include <iostream>
using namespace std;

struct diemt
{
    int x;
    int y;
};

typedef struct diemt DIEM;

void xuat(DIEM[], int);
void nhap(DIEM[], int);

int main()
{
    int n;
    cout << "Nhap so diem: ";
    cin >> n;
    DIEM a[100];
    nhap(a, n);
    xuat(a, n);
    return 0;
}

void nhap(DIEM a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap toa do diem " << i + 1 << ":" << endl;
        cout << "Nhap x: ";
        cin >> a[i].x;
        cout << "Nhap y: ";
        cin >> a[i].y;
    }
}

void xuat(DIEM a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Toa do diem " << i + 1 << ": (" << a[i].x << ", " << a[i].y << ")" << endl;
    }
}

