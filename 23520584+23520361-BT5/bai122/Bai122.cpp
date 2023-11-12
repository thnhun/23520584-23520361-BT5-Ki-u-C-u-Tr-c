#include <iostream>
using namespace std;

struct duongtron
{
    float R;
};
typedef struct duongtron DUONGTRON;

void Nhap(DUONGTRON& c)
{
    cout << "Nhap ban kinh:";
    cin >> c.R;
}

void Xuat(DUONGTRON c)
{
    cout << "Ban kinh duong tron la:" << c.R << "\n ";
}

float ChuVi(DUONGTRON c)
{
    return 2 * 3.14 * c.R;
}

int main()
{
    DUONGTRON dt;
    Nhap(dt);
    Xuat(dt);
    float kq = ChuVi(dt);
    cout << "Chu vi la:" << kq;
    return 0;
}