#include <iostream>
using namespace std;
struct Diem {
    double x, y;
};
bool LaTamGiacDoclap(Diem, Diem, Diem);
bool TimTamGiacDocLap(Diem[], int, Diem&, Diem&, Diem&);

int main() {
    int n;
    cout << "Nhap so luong diem (n): ";
    cin >> n;

    if (n < 3) {
        cout << "Khong the tao tam giac doc lap voi so luong diem nho hon 3." << endl;
        return 1;
    }

    Diem* diem = new Diem[n];
    cout << "Nhap toa do cho tung diem:\n";
    for (int i = 0; i < n; i++) {
        cout << "Nhap diem thu " << i + 1 << " (x y): ";
        cin >> diem[i].x >> diem[i].y;
    }

    Diem A, B, C;
    if (TimTamGiacDocLap(diem, n, A, B, C)) {
        cout << "Tam giac doc lap la:\n";
        cout << "A(" << A.x << ", " << A.y << ")\n";
        cout << "B(" << B.x << ", " << B.y << ")\n";
        cout << "C(" << C.x << ", " << C.y << ")\n";
    }
    else {
        cout << "Khong tim thay tam giac doc lap.\n";
    }

    delete[] diem;

    return 0;
}
bool LaTamGiacDoclap(Diem P1, Diem P2, Diem P3) {

    return ((P2.x - P1.x) * (P3.y - P1.y) - (P3.x - P1.x) * (P2.y - P1.y) != 0);
}

bool TimTamGiacDocLap(Diem diem[], int n, Diem& A, Diem& B, Diem& C) {
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (LaTamGiacDoclap(diem[i], diem[j], diem[k])) {
                    A = diem[i];
                    B = diem[j];
                    C = diem[k];
                    return true;
                }
            }
        }
    }
    return false;
}