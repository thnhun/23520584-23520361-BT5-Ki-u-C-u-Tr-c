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
float KhoangCach(DuongThang dt, Diem p)
{
    return abs(dt.a * p.x - p.y + dt.b) / sqrt(dt.a * dt.a + 1);
}
DuongThang GanDiemNhat(DuongThang a[], int n, Diem P)
{
    DuongThang lc = a[0];
    for (int i = 0; i < n; i++)
        if (KhoangCach(a[i], P) < KhoangCach(lc, P))
            lc = a[i];
    return lc;
}
void XuatDuongThang(DuongThang dt)
{
    cout << "Duong thang: y = " << dt.a << "x + " << dt.b << endl;
}

int main()
{
    int n;
    cout << "Nhap so luong duong thang: ";
    cin >> n;
    DuongThang a[100];
    Diem P;
    NhapDiem(P);
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap duong thang thu " << i + 1 << ":\n";
        NhapDuongThang(a[i]);
    }
    DuongThang duongGanNhat = GanDiemNhat(a, n, P);
    cout << "Duong thang gan diem P nhat la:\n";
    XuatDuongThang(duongGanNhat);
    return 0;
}