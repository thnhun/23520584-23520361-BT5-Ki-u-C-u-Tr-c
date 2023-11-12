#include <iostream>
using namespace std;

struct duongthang {
    float a;
    float b;
    float c;
};

typedef struct duongthang DUONGTHANG;

void Nhap(DUONGTHANG&);
void Nhap(DUONGTHANG[], int&);
bool ktSongSong(DUONGTHANG, DUONGTHANG);
bool ktCapSongSong(DUONGTHANG[], int);

int main() {
    DUONGTHANG a[100];
    int n;
    Nhap(a, n);
    if (ktCapSongSong(a, n))
        cout << "Co cap song song";
    else
        cout << "Khong co cap song song";
    return 1;
}

void Nhap(DUONGTHANG& d) {
    cout << "Nhap a: ";
    cin >> d.a;
    cout << "Nhap b: ";
    cin >> d.b;
    cout << "Nhap c: ";
    cin >> d.c;
}

void Nhap(DUONGTHANG a[], int& n) {
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Nhap duong thang A[" << i << "]:";
        Nhap(a[i]);
    }
}

bool ktSongSong(DUONGTHANG d1, DUONGTHANG d2) {
    float D = d1.a * d2.b - d2.a * d1.b;
    float Dx = -d1.c * d2.b + d2.c * d1.b;
    if (D == 0 && Dx == 0)
        return true;
    return false;
}

bool ktCapSongSong(DUONGTHANG a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ktSongSong(a[i], a[j])) {
                return true;
            }
        }
    }
    return false;
}