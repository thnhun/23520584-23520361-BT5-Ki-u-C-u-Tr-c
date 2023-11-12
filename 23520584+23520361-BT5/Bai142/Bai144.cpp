
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct dinh {
    float x;
    float y;
};
typedef struct dinh DINH;

struct tamgiac {
    dinh a;
    dinh b;
    dinh c;
};
typedef struct tamgiac TAMGIAC;

void nhap(DINH&);
void xuat(DINH);
void nhap(TAMGIAC&);
void xuat(TAMGIAC);
float TongKhoangCach(TAMGIAC, DINH);

int main() 
{
    DINH a, b, c, P;
    cout << "Nhap diem P:" ;
    nhap(P);
    TAMGIAC d;
    nhap(d);
    xuat(d);
    cout << "Tong khoang cach tu P den 3 dinh tam giac= " << TongKhoangCach(d, P);
    return 0;
}


void nhap(DINH& a) {
    cout << "\nnhap x: ";
    cin >> a.x;
    cout << "nhap y: ";
    cin >> a.y;
}

void xuat(DINH a) 
{
    cout << "(" << a.x << ", " << a.y << ")" << endl;
}

void nhap(TAMGIAC& a) 
{
    cout << "Dinh a: ";
    nhap(a.a);
    cout << "Dinh b: ";
    nhap(a.b);
    cout << "Dinh c: ";
    nhap(a.c);
}

void xuat(TAMGIAC a) 
{
    xuat(a.a);
    xuat(a.b);
    xuat(a.c);
}

float KhoangCach(DINH p, DINH q)
{
    return sqrt((p.x - q.x) * (p.x - q.x) + (p.y - q.y) * (p.y - q.y));
}

float TongKhoangCach(TAMGIAC t, DINH P)
{
    float a = KhoangCach(t.a, P);
    float b = KhoangCach(t.b, P);
    float c = KhoangCach(t.c, P);
    return a + b + c;
}
