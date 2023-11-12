#include<iostream>
#include<cmath> 
using namespace std;

struct Dathuc
{
	float* heso;
	long int somu;
};
typedef struct Dathuc DATHUC;

void Nhap(DATHUC&);
float Nghiem(DATHUC,float,float);
void Xuat(DATHUC);
float Tinh(DATHUC, float);

int main()
{
    DATHUC d;
    float a, b;
    Nhap(d);
    cout << "Nhap khoang a,b: ";
    cin >> a >> b;
    Xuat(d);
    cout << "Ket qua la: " << Nghiem(d, a, b);
    delete[] d.heso;
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
float Nghiem(DATHUC x, float a, float b)
{
    double c = 0;
    while (Tinh(x, a) * Tinh(x, b) > 0)
    {
        c = (a + b) / 2;
        // kt c co la nghiem khong
        if (Tinh(x, c) == 0.0)
            return c;
        // neu f(a), f(c) trai dau thi nghiem nam trong [a,c]
        else if (Tinh(x, a) * Tinh(x, c) < 0)
            b = c;
        // Nguoc lai nam trong [c,b]
        else
            a = c;
    }
    // tra ve nghiem
    return (a + b) / 2;
}
float Tinh(DATHUC x, float s) 
{
    float kq = 0.0;
    for (int i = x.somu; i >= 0; i--) {
        kq += x.heso[i] * pow(s, i);
    }
    return kq;
}