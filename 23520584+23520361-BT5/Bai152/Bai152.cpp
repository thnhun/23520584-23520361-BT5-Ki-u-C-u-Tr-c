#include <iostream>
#include <iomanip>
using namespace std;

struct diem 
{
    float x, y, z;
};

struct duongthang 
{
    diem diemGoc;   
    diem huong;    
};

typedef struct diem DIEM;
typedef struct duongthang DUONGTHANG;

void Nhap(diem& p) 
{
    cout << "Nhap toa do diem x: ";
    cin >> p.x;
    cout << "Nhap toa do diem y: ";
    cin >> p.y;
    cout << "Nhap toa do diem z: ";
    cin >> p.z;
}

void Nhap(DUONGTHANG& dt) 
{
    cout << "Nhap thong tin cho diem goc cua duong thang:\n";
    Nhap(dt.diemGoc);
    cout << "Nhap thong tin cho vector huong cua duong thang:\n";
    Nhap(dt.huong);
}

bool KiemTraSongSong(DUONGTHANG dt1, DUONGTHANG dt2) 
{
    return (dt1.huong.x / dt2.huong.x) == (dt1.huong.y / dt2.huong.y) &&
        (dt1.huong.y / dt2.huong.y) == (dt1.huong.z / dt2.huong.z);
}

int main() 
{
    DUONGTHANG dt1, dt2;
    cout << "duong thang 1:\n";
    Nhap(dt1);
    cout << "duong thang 2:\n";
    Nhap(dt2);
    if (KiemTraSongSong(dt1, dt2)) 
        cout << "song song.\n";
    else 
        cout << "khong song song.\n";
    return 0;
}