#include<iostream>
using namespace std;

struct ngay 
{
    int ngay;
    int thang;
    int nam;
};
typedef struct ngay NGAY;
void gannhaunhat(NGAY[], int, NGAY&, NGAY&);

int main() 
{
    int n;
    cout << "Nhap so luong ngay: ";
    cin >> n;

    NGAY ngaythu[100];
    cout << "Nhap cac ngay:\n";
    for (int i = 0; i < n; i++) 
    {
        cout << "Ngay " << i + 1 << ":\n";
        cout << "Nhap ngay: ";
        cin >> ngaythu[i].ngay;
        cout << "Nhap thang: ";
        cin >> ngaythu[i].thang;
        cout << "Nhap nam: ";
        cin >> ngaythu[i].nam;
    }

    NGAY ngay1, ngay2;
    gannhaunhat(ngaythu, n, ngay1, ngay2);

    cout << "Hai ngay gan nhau nhat la:\n";
    cout << "Ngay 1: " << ngay1.ngay << "/" << ngay1.thang << "/" << ngay1.nam << endl;
    cout << "Ngay 2: " << ngay2.ngay << "/" << ngay2.thang << "/" << ngay2.nam << endl;
    return 0;
}

int khoangcach(NGAY a, NGAY b)
{
    int ngay_a = a.nam * 365 + a.thang * 30 + a.ngay;
    int ngay_b = b.nam * 365 + b.thang * 30 + b.ngay;
    return abs(ngay_a - ngay_b);
}

void gannhaunhat(NGAY a[], int n, NGAY& x, NGAY& y)
{
    x = a[0];
    y = a[1];
    for (int i = 0; i <= n - 2; i++)
        for (int j = i + 1; j <= n - 1; j++)
            if (khoangcach(a[i], a[j]) < khoangcach(x, y))
            {
                x = a[i];
                y = a[j];
            }
}

