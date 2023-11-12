#include <iostream>
using namespace std;

struct diemkhonggian
{
    float x;
    float y;
    float z;
};
typedef struct diemkhonggian DIEMKHONGGIAN;

void Nhap(DIEMKHONGGIAN& P)
{
    cout << "Nhap x;";
    cin >> P.x;
    cout << "Nhap y:";
    cin >> P.y;
    cout << "Nhap z:";
    cin >> P.z;
}

void Xuat(DIEMKHONGGIAN& P)
{
    cout << "Toa do cua x:" << P.x << "\n";
    cout << "Toa do cua y:" << P.y << "\n";
    cout << "Toa do cua z:" << P.z << "\n";
}
int main()
{
    DIEMKHONGGIAN dt;
    Nhap(dt);
    Xuat(dt);
    return 0;
}