#include <iostream>
using namespace std;

struct Diem
{
    float x;
    float y;
};
struct diem
{
    float x;
    float y;
};
typedef struct diem DIEM;
struct duongtron
{
    float r;
    DIEM I;
};
typedef struct duongtron DUONGTRON;
void NhapDTron(DIEM& p)
{
    cout << "Nhap toa do x duong tron:";
    cin >> p.x;
    cout << "Nhap toa do y duong tron:";
    cin >> p.y;
}
void Xuat(DIEM P)
{
    cout << "\nx: " << P.x;
    cout << "\ny: " << P.y;
}
void XuatDTron(DUONGTRON c)
{
    cout << "\nTam:";
    Xuat(c.I);
    cout << "\nBan kinh: " << c.r;
}
void Nhap(Diem a[][100], int& m, int& n)
{
    cout << "Nhap m: ";
    cin >> m;
    cout << "Nhap n: ";
    cin >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Nhap x cua diem [" << i << "][" << j << "]: ";
            cin >> a[i][j].x;
            cout << "Nhap y cua diem [" << i << "][" << j << "]: ";
            cin >> a[i][j].y;
        }
    }
}
void XuatDThang(Diem a[][100], int m, int n)
{
    cout << "Ma tran toa do diem:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "(" << a[i][j].x << ", " << a[i][j].y << ") ";
        }
        cout << endl;
    }
}
int DemDiemTrongDuongTron(Diem a[][100], int rows, int cols, DUONGTRON c)
{
    int dem = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            float khoangCach = sqrt(pow(a[i][j].x - c.I.x, 2) + pow(a[i][j].y - c.I.y, 2));
            if (khoangCach <= c.r)
            {
                dem++;
            }
        }
    }
    return dem;
}
int main()
{
    Diem a[100][100];
    int m, n;
    Nhap(a, m, n);
    DUONGTRON c;
    cout << "Nhap ban kinh duong tron: ";
    cin >> c.r;
    cout << "Nhap toa do tam duong tron:\n";
    NhapDTron(c.I);
    int soLuongDiemTrongDuongTron = DemDiemTrongDuongTron(a, m, n, c);
    cout << "So luong diem trong duong tron: " << soLuongDiemTrongDuongTron << endl;
    return 0;
}