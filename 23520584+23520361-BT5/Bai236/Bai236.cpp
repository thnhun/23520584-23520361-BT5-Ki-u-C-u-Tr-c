#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct sophuc
{
    float thuc;
    float ao;
};
typedef struct sophuc SOPHUC;
void Nhap(SOPHUC& p)
{
    cout << "Nhap phan thuc:";
    cin >> p.thuc;
    cout << "Nhap phan ao:";
    cin >> p.ao;
}
void NhapMaTranPS(SOPHUC a[][100], int& m, int& n)
{
    cout << "Nhap so hang cua ma tran: ";
    cin >> m;
    cout << "Nhap so cot cua ma tran: ";
    cin >> n;

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            cout << "Nhap so phuc tai [" << i << "][" << j << "]: ";
            Nhap(a[i][j]);
        }
}
SOPHUC TimSoPhucDauTien(SOPHUC a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j].thuc > 0 && a[i][j].ao > 0)
                return a[i][j];
    return { 0, 0 };
}
int main()
{
    SOPHUC a[100][100];
    int m, n;
    NhapMaTranPS(a, m, n);

    SOPHUC sp = TimSoPhucDauTien(a, m, n);

    if (sp.thuc == 0 && sp.ao == 0)
        cout << "Khong co so phuc nao thoa man dieu kien.\n";
    else
        cout << "So phuc dau tien co phan thuc duong va phan ao duong la: " << sp.thuc << " + " << sp.ao << "i\n";
    return 0;
}