#include <iostream>
#include <algorithm>
using namespace std;

struct PhanSo 
{
    int tu;
    int mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PhanSo[][100], int, int);
void Xuat(PhanSo[100][100], int, int);
bool soSanhPhanSo(PHANSO& a, PHANSO&);
void sapXepMaTran(PhanSo[100][100], int, int);

int main() 
{
    int m, n;
    PhanSo a[100][100];

    cout << "Nhap so hang: ";
    cin >> m;
    cout << "Nhap so cot: ";
    cin >> n;

    Nhap(a, m, n);

    cout << "Ma tran truoc khi sap xep:" << endl;
    Xuat(a, m, n);

    sapXepMaTran(a, m, n);

    cout << "Ma tran sau khi sap xep:" << endl;
    Xuat(a, m, n);

    return 0;
}
bool soSanhPhanSo(PHANSO& a, PHANSO& b)
{
    return (a.tu * b.mau) < (b.tu * a.mau);
}

void Nhap(PhanSo a[100][100], int m, int n) 
{
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Nhap tu so cua a[" << i << "][" << j << "]: ";
            cin >> a[i][j].tu;
            cout << "Nhap mau so cua a[" << i << "][" << j << "]: ";
            cin >> a[i][j].mau;
        }
    }
}

void Xuat(PhanSo a[100][100], int m, int n)
{
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
            cout << a[i][j].tu << "/" << a[i][j].mau << " ";
        cout << endl;
    }
}

void sapXepMaTran(PhanSo a[100][100], int m, int n) 
{
    // chuyen ma tran thanh mang
    PhanSo temp[100 * 100];
    int index = 0;

    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            temp[index++] = a[i][j];

    // Sap xep
    sort(temp, temp + m * n, soSanhPhanSo);
    //gan lai tu mang sang ma tran
    index = 0;
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            a[i][j] = temp[index++];
}