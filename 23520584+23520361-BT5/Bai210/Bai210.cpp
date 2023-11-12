#include <iostream>
using namespace std;

struct DuongThang 
{
    double a; 
    double b; 
    double c; 
};
typedef struct DuongThang DUONGTHANG;
int ktCapTrungNhau(DUONGTHANG[], int);

int main()
{
    int n;
    cout << "Nhap so luong duong thang: ";
    cin >> n;

    DUONGTHANG a[100];

    for (int i = 0; i < n; i++)
    {
        cout << "Nhap du lieu cho duong thang " << i + 1 << ": " << endl;
        cout << "a = ";
        cin >> a[i].a;
        cout << "b = ";
        cin >> a[i].b;
        cout << "c = ";
        cin >> a[i].c;
    }
    int result = ktCapTrungNhau(a, n);
    if (result == 1)
    {
        cout << "Cac duong thang co cap trung nhau." << endl;
    }
    else {
        cout << "Khong co duong thang nao trung nhau." << endl;
    }

    return 0;
}

bool ktTrung(DUONGTHANG a, DUONGTHANG b)
{
    if (a.a / b.a == a.b / b.b && a.b / b.b == a.c / b.c) 
    {
        return true;
    }
    return false;
}

int ktCapTrungNhau(DUONGTHANG a[], int n)
{
    int flag = 0;
    for (int i = 0; i <= n - 2; i++) 
    {
        for (int j = i + 1; j <= n - 1; j++) 
        {
            if (ktTrung(a[i], a[j]))
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1) {
            break;
        }
    }
    return flag;
}


