#include <iostream>
using namespace std;
struct PHANSO 
{
    int tu, mau;
};
void Xuat(PHANSO ps);
void Xuat(PHANSO a[][100], int m, int n);

int main() 
{
    int m, n;
    cout << "Nhap so hang (m): ";
    cin >> m;
    cout << "Nhap so cot (n): ";
    cin >> n;

    PHANSO dsPhanSo[100][100];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) 
        {
            cout << "Nhap tu so cua A[" << i << "][" << j << "]: ";
            cin >> dsPhanSo[i][j].tu;
            cout << "Nhap mau so cua A[" << i << "][" << j << "]: ";
            cin >> dsPhanSo[i][j].mau;
        }
    Xuat(dsPhanSo, m, n);
    return 0;
}

void Xuat(PHANSO ps) 
{
    cout << ps.tu << "/" << ps.mau;
}

void Xuat(PHANSO a[][100], int m, int n) 
{
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cout << "A[" << i << "][" << j << "]: ";
            Xuat(a[i][j]);
            cout << endl;
        }
    }
}

