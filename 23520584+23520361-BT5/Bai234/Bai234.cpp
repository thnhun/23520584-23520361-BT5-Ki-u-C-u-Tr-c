#include <iostream>
using namespace std;

struct SOPHUC 
{
    float phanThuc, phanAo;
};


void Nhap(SOPHUC& sp);
void Nhap(SOPHUC a[][100], int& m, int& n);

int main()
{
    int m, n;
    SOPHUC dsSoPhuc[100][100];
    Nhap(dsSoPhuc, m, n);
    cout << "Ma tran so phuc vua nhap la:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "(" << dsSoPhuc[i][j].phanThuc << " + " << dsSoPhuc[i][j].phanAo << "i)  ";
        }
        cout << endl;
    }

    return 0;
}

void Nhap(SOPHUC& sp) 
{
    cout << "Nhap phan thuc: ";
    cin >> sp.phanThuc;
    cout << "Nhap phan ao: ";
    cin >> sp.phanAo;
}
void Nhap(SOPHUC a[][100], int& m, int& n)
{
    cout << "Nhap so hang: ";
    cin >> m;
    cout << "Nhap so cot: ";
    cin >> n;

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            cout << "Nhap a[" << i << "][" << j << "]:\n";
            Nhap(a[i][j]);
        }
}

