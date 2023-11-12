#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;
void Nhap(DUONGTHANG& d)
{
    cout << "Nhap a;";
    cin >> d.a;
    cout << "Nhap b:";
    cin >> d.b;
    cout << "Nhap c:";
    cin >> d.c;
}
void Xuat(DUONGTHANG& d)
{
    cout << "Toa do cua a:" << d.a << "\n";
    cout << "Toa do cua b:" << d.b << "\n";
    cout << "Toa do cua z:" << d.c << "\n";
}
int main()
{
    DUONGTHANG dt;
    Nhap(dt);
    Xuat(dt);
    return 0;
}