#include <iostream>
#include <vector>
using namespace std;

struct DaThuc 
{
    vector<int> heSo;
    DaThuc() {}
    DaThuc(const vector<int>& heSo) : heSo(heSo) {}
    DaThuc(int heSo1) {
        heSo.push_back(heSo1);
    }
};
DaThuc operator*(const DaThuc& dt1, const DaThuc& dt2) 
{
    int deg1 = dt1.heSo.size() - 1;
    int deg2 = dt2.heSo.size() - 1;
    int resultDegree = deg1 + deg2;
    DaThuc result(vector<int>(resultDegree + 1, 0));
    for (int i = 0; i <= deg1; ++i) 
    {
        for (int j = 0; j <= deg2; ++j) 
        {
            result.heSo[i + j] += dt1.heSo[i] * dt2.heSo[j];
        }
    }

    return result;
}


void XuatDaThuc(const DaThuc& dt) 
{
    int degree = dt.heSo.size() - 1;

    for (int i = degree; i > 0; --i) 
    {
        if (dt.heSo[i] != 0) {
            cout << dt.heSo[i] << "x^" << i << " + ";
        }
    }

    cout << dt.heSo[0] << endl;
}

int main() 
{
    DaThuc dt1({ 1, 2, 3 });
    DaThuc dt2({ 4, 5 });
    DaThuc dtTich = dt1 * dt2;
    cout << "Da thuc 1: ";
    XuatDaThuc(dt1);
    cout << "Da thuc 2: ";
    XuatDaThuc(dt2);
    cout << "Tich hai da thuc: ";
    XuatDaThuc(dtTich);
    return 0;
}
