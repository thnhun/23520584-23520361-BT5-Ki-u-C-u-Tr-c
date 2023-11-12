#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct Diem
{
    float x;
    float y;
};
typedef struct Diem DIEM;

struct TamGiac
{
    DIEM A;
    DIEM B;
    DIEM C;
};
typedef struct TamGiac TAMGIAC;
void Nhap(DIEM& p)
{
    cout << "Nhap toa do diem x:"<<" ";
    cin >> p.x;
    cout << "Nhap toa do diem y:"<<" ";
    cin >> p.y;
}
void Nhap(TAMGIAC& t)
{
    cout << "Nhap dinh A:\n";
    Nhap(t.A);
    cout << "Nhap dinh B:\n";
    Nhap(t.B);
    cout << "Nhap dinh C:\n";
    Nhap(t.C);
}
float KhoangCach(DIEM P, DIEM Q)
{
    return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}
float ChuVi(TAMGIAC t)
{
    float chuVi = KhoangCach(t.A, t.B) + KhoangCach(t.B, t.C) + KhoangCach(t.C, t.A);
    return chuVi;
}
int main()
{
    TAMGIAC tamGiac;
    Nhap(tamGiac);
    float chuVi = ChuVi(tamGiac);
    cout << "Chu vi cua tam giac la: " << chuVi << endl;
    return 0;
}