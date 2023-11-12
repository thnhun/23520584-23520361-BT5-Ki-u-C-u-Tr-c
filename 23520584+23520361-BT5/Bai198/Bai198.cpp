#include <iostream>
#include <cmath>
using namespace std;

struct duongtron 
{
    float i, j, r;
};
typedef struct duongtron DUONGTRON;

float khoangcachgoc(DUONGTRON);
DUONGTRON gangocnhat(DUONGTRON[], int);


int main()
{
    int n;
    cout << "Nhap so luong duong tron: ";
     cin >> n;
     DUONGTRON dtr[100];
    for (int i = 0; i < n; i++) 
    {
        cout << "Nhap toa do va ban kinh cua duong tron thu " << i + 1 << ": ";
        cin >> dtr[i].i >> dtr[i].j >> dtr[i].r;
    }

    DUONGTRON gnhat = gangocnhat(dtr, n);

    cout << "Duong tron gan goc toa do nhat la: (" << gnhat.i << ", " << gnhat.j << "), ban kinh: " << gnhat.r << endl;

    return 0;
}


float khoangcachgoc(DUONGTRON c) {
    float kc = sqrt(c.i * c.i + c.j * c.j);
    return fabs(kc - c.r);
}

DUONGTRON gangocnhat(DUONGTRON a[], int n)
{
    DUONGTRON lc = a[0];
    for (int i = 1; i < n; i++) {
        if (khoangcachgoc(a[i]) < khoangcachgoc(lc)) {
            lc = a[i];
        }
    }
    return lc;
}


