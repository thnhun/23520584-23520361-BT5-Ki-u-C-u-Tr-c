#include <iostream>
using namespace std;

struct PhanSo
{
    int tu;
    int mau;
};

void NhapPS(PhanSo& ps)
{
    cout << "Nhap tu: ";
    cin >> ps.tu;
    cout << "Nhap mau: ";
    cin >> ps.mau;
}
void NhapMaTranPS(PhanSo a[][100], int& m, int& n)
{
    cout << "Nhap m: ";
    cin >> m;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Nhap phan so tai [" << i << "][" << j << "]: ";
            NhapPS(a[i][j]);
        }
    }
}
void XuatMaTranPS(PhanSo a[][100], int m, int n)
{
    cout << "Ma tran phan so:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "(" << a[i][j].tu << "/" << a[i][j].mau << ") ";
        }
        cout << endl;
    }
}

PhanSo TimPSMin(PhanSo a[][100], int m, int n)
{
    PhanSo minPhanSo = a[0][0];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((float)a[i][j].tu / a[i][j].mau < (float)minPhanSo.tu / minPhanSo.mau)
            {
                minPhanSo = a[i][j];
            }
        }
    }

    return minPhanSo;
}
int DemPSMin(PhanSo a[][100], int m, int n)
{
    PhanSo minPhanSo = TimPSMin(a, m, n);
    int dem = 0;

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            if ((float)a[i][j].tu / a[i][j].mau == (float)minPhanSo.tu / minPhanSo.mau)
                dem++;
        }
    return dem;
}
int main()
{
    PhanSo a[100][100];
    int m, n;
    NhapMaTranPS(a, m, n);
    XuatMaTranPS(a, m, n);
    int dem = DemPSMin(a, m, n);
    cout << "So luong phan so nho nhat trong ma tran la: " << dem << endl;
    return 0;
}