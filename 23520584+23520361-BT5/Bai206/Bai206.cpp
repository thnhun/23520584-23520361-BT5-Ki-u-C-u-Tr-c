#include <iostream>
using namespace std;

struct Diem
{
    float x;
    float y;
};
struct DuongThang
{
    float a;
    float b;
};
void NhapDiem(Diem& p)
{
    cout << "Nhap toa do x: ";
    cin >> p.x;
    cout << "Nhap toa do y: ";
    cin >> p.y;
}
void NhapDuongThang(DuongThang& dt)
{
    cout << "Nhap he so goc a: ";
    cin >> dt.a;
    cout << "Nhap he so tu do b: ";
    cin >> dt.b;
}
void NhapMang(DuongThang a[], int& n)
{
    cout << "Nhap so luong duong thang: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Nhap duong thang thu " << i + 1 << ":\n";
        NhapDuongThang(a[i]);
    }
}
void XuatDiem(Diem& p)
{
    cout << "(" << p.x << ", " << p.y << ")";
}
void XuatDuongThang(DuongThang& dt)
{
    cout << "y = " << dt.a << "x + " << dt.b;
}
void XuatMang(DuongThang a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Duong thang A[" << i << "]: ";
        XuatDuongThang(a[i]);
        cout << endl;
    }
}
int main()
{
    DuongThang a[100];
    int soLuongDuongThang;
    NhapMang(a, soLuongDuongThang);
    cout << "\nThong tin ve duong thang:\n";
    XuatMang(a, soLuongDuongThang);
    return 0;
}