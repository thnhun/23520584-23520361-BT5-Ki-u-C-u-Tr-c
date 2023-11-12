
#include <iostream>
using namespace std;

struct sophuc
{
    float phanthuc;
    float phanao;
};
typedef struct sophuc SOPHUC;
void xuat(SOPHUC[], int);


int main()
{
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    SOPHUC* mang = new SOPHUC[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan thuc cua phan tu thu " << i + 1 << ": ";
        cin >> mang[i].phanthuc;
        cout << "Nhap phan ao cua phan tu thu " << i + 1 << ": ";
        cin >> mang[i].phanao;
    }

    cout << "Mang so phuc vua nhap la: ";
    xuat(mang, n);
    delete[] mang;
    return 0;
}

void xuat(SOPHUC sp)
{
    cout << "(" << sp.phanthuc << " + " << sp.phanao << "i) ";
}

void xuat(SOPHUC a[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        xuat(a[i]);
    }
    cout << endl;
}

