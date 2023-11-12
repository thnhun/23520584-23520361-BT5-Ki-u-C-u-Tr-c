#include<iostream>
using namespace std;

struct DaThuc
{
    float* heso;
    int somu;
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC&);
void Xuat(DATHUC);
DATHUC CongDaThuc(DATHUC, DATHUC);

int main()
{
    DATHUC a, b, tong;

    cout << "Nhap da thuc thu nhat:\n";
    Nhap(a);

    cout << "\nNhap da thuc thu hai:\n";
    Nhap(b);

    tong = CongDaThuc(a, b);

    cout << "\nTong cua hai da thuc la:\n";
    Xuat(tong);

    delete[] a.heso;
    delete[] b.heso;
    delete[] tong.heso;

    return 0;
}

void Nhap(DATHUC& x)
{
    cout << "Nhap bac cua da thuc: ";
    cin >> x.somu;

    x.heso = new float[x.somu + 1];

    for (int i = x.somu; i >= 0; i--)
    {
        cout << "He so cua x^" << i << " la: ";
        cin >> x.heso[i];
    }
}

void Xuat(DATHUC x)
{
    for (int i = x.somu; i > 0; i--)
        cout << x.heso[i] << "x^" << i << " + ";
    cout << x.heso[0] << endl;
}

DATHUC CongDaThuc(DATHUC a, DATHUC b)
{
    DATHUC tong;
    int maxSomu = max(a.somu, b.somu);

    tong.somu = maxSomu;
    tong.heso = new float[maxSomu + 1];

    for (int i = 0; i <= maxSomu; i++)
    {
        float hesoA = (i <= a.somu) ? a.heso[i] : 0;
        float hesoB = (i <= b.somu) ? b.heso[i] : 0;

        tong.heso[i] = hesoA + hesoB;
    }

    return tong;
}
