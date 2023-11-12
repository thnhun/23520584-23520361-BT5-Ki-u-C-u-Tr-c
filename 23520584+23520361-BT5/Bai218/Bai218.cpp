#include <iostream>
using namespace std;

struct Diem
{
    float x;
    float y;
};
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
void Xuat(Diem a[][100], int m, int n)
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
int main()
{
    Diem a[100][100];
    int m, n;
    Nhap(a, m, n);
    Xuat(a, m, n);
    return 0;
}