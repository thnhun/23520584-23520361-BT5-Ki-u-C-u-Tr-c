
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

float khoangcach(DINH, DINH);
int kiemtra(TAMGIAC);
void nhap(DINH&);
void xuat(DINH);
void nhap(TAMGIAC&);
void xuat(TAMGIAC);

int main()
{
    DINH a, b, c;
    TAMGIAC d;
    nhap(d);
    xuat(d);
    cout << kiemtra(d);
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

float khoangcach(DINH p, DINH q) 
{
    return sqrt((p.x - q.x) * (p.x - q.x) + (p.y - q.y) * (p.y - q.y));
}

int kiemtra(TAMGIAC t) 
{
    float a = khoangcach(t.b, t.c);
    float b = khoangcach(t.c, t.a);
    float c = khoangcach(t.a, t.b);
    if (a + b > c && b + c > a && c + a > b)
        return 1;
    return 0;
}