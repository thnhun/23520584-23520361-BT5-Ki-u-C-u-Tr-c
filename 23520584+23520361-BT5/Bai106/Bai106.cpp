#include <iostream>
using namespace std;

struct Ngay {
    int ngay;
    int thang;
    int nam;
};
typedef struct Ngay NGAY;

void Nhap(NGAY&);
void Xuat(NGAY);
NGAY Truoc(NGAY&);


int main() 
{
    NGAY x;
    Nhap(x);
    NGAY NgayTruoc = Truoc(x);
    Xuat(NgayTruoc);
    return 0;
}
void Nhap(NGAY& x)
{
    cout << "Nhap ngay: ";
    cin >> x.ngay;
    cout << "Nhap thang: ";
    cin >> x.thang;
    cout << "Nhap nam: ";
    cin >> x.nam;
}
void Xuat(NGAY x)
{
    cout << "ngay truoc do la: " << x.ngay << "/" << x.thang << "/" << x.nam;
}
NGAY Truoc(NGAY& x) 
{
    NGAY truoc = x;

    if (x.ngay == 1)
    {
        if (x.thang == 1)
        {
            x.nam--;
            x.thang = 12;
        }
        else {
            x.thang--;
            x.ngay = 31;
        }
    }
    else
        x.ngay--;
    truoc = x;
    return truoc;
}
