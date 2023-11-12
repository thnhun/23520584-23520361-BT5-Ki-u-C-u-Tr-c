#include <iostream>
using namespace std;

struct Diem
{
    int x;
    int y;
};
typedef struct Diem DIEM;
int tansuat(Diem[][100], int, int, Diem);
int demkhongtrung(Diem[][100], int, int);

int main() 
{
    int m, n;
    cout << "Nhap vao so hang m: ";
    cin >> m;
    cout << "Nhap vao so cot n: ";
    cin >> n;

    Diem a[100][100];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            cout << "Nhap toa do diem a[" << i << "][" << j << "]" << endl;
            cout << "Nhap toa do x: ";
            cin >> a[i][j].x;
            cout << "Nhap toa do y: ";
            cin >> a[i][j].y;
        }

    int count = demkhongtrung(a, m, n);
    cout << "So luong diem khong trung voi diem khac la: " << count << endl;

    return 0;
}


int tansuat(Diem a[][100], int m, int n, Diem p)
{
    int dem = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j].x != p.x || a[i][j].y != p.y)
                dem++;
    return dem;
}

int demkhongtrung(Diem a[][100], int m, int n) 
{
    int dem = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (tansuat(a, m, n, a[i][j]) == 1)
                dem++;
    return dem;
}
