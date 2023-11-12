#include<iostream>
using namespace std;
struct phanso 
{
    int tu;
    int mau;
};
typedef struct phanso PHANSO;
int ViTriNhoNhat(PHANSO[], int);

int main() {
    int n;
    cout << "Nhap so luong phan so trong mang: ";
    cin >> n;

    phanso a[100];
    for (int i = 0; i < n; i++) {
        cout << "Nhap tu so phan so thu " << i + 1 << ": ";
        cin >> a[i].tu;
        cout << "Nhap mau so phan so thu " << i + 1 << ": ";
        cin >> a[i].mau;
    }

    int vt = ViTriNhoNhat(a, n);
    cout << "Vi tri co gia tri nho nhat trong mang: " << vt << endl;
    return 0;
}



int sosanh(PHANSO a, PHANSO b) 
{
    int A = a.tu * b.mau;
    int B = b.tu * a.mau;

    if (A < B)
    {
        return -1;
    }
    else if (A > B) 
    {
        return 1;
    }
    return 0;
}

int ViTriNhoNhat(PHANSO a[], int n)
{
    int lc = 0;
    for (int i = 0; i <= n - 1; i++) 
    {
        if (sosanh(a[i], a[lc]) == -1)
        {
            lc = i;
        }
    }
    return lc;
}

