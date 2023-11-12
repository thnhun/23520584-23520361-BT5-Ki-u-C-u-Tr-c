#include <iostream>
#include <cmath>
using namespace std;
struct Sphere 
{
    double x, y, z;
    double radius; 
};
void NhapThongTin(Sphere& hc) 
{
    cout << "Nhap toa do x,y,z cua tam hinh cau:";
    cin >> hc.x >> hc.y >> hc.z;
    cout << "Nhap ban kinh cua hinh cau:";
    cin >> hc.radius;
}
void XetViTriTuongDoi(const Sphere& hc1, const Sphere& hc2)
{
    double khoangCachTam = sqrt(pow(hc2.x - hc1.x, 2) + pow(hc2.y - hc1.y, 2) + pow(hc2.z - hc1.z, 2));
    double tongBanKinh = hc1.radius + hc2.radius;
    if (khoangCachTam < abs(hc2.radius - hc1.radius))
    {
        cout << "Hai hinh cau chua trong nhau.(0)" << "\n";
    }
    else if (khoangCachTam > tongBanKinh)
    {
        cout << "Hai hinh cau roi nhau.(1)" << "\n";
    }
    else if (khoangCachTam == tongBanKinh)
    {
        cout << "Hai hinh cau tiep xuc ngoai.(2)" << "\n";
    }
    else if (khoangCachTam < tongBanKinh)
    {
        if (khoangCachTam > abs(hc2.radius - hc1.radius))
        {
            cout << "Hai hinh cau cat nhau.(3)" << "\n";
        }
        else if (khoangCachTam == abs(hc2.radius - hc1.radius))
        {
            cout << "Hai hinh cau tiep xuc trong.(4)" << "\n";
        }
        else
        {
            cout << "Mot hinh cau nam ben trong hinh cau khac.(5)" << "\n";
        }
    }
}

int main() 
{
    Sphere hc1, hc2;
    cout << "Nhap thong tin cho hinh cau 1:\n";
    NhapThongTin(hc1);
    cout << "\nNhap thong tin cho hinh cau 2:\n";
    NhapThongTin(hc2);
    cout << "\nKet qua xet vi tri tuong doi giua hai hinh cau:\n";
    XetViTriTuongDoi(hc1, hc2);
    return 0;
}
