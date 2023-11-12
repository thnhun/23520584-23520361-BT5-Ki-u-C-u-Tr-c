#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> DaThuc;

DaThuc NhapDaThuc(int bac) 
{
    DaThuc dt(bac + 1);
    cout << "Nhap cac he so cua da thuc, bat dau tu he so bac " << bac << " xuong bac 0:\n";
    for (int i = bac; i >= 0; i--) 
    {
        cout << "Nhap he so bac " << i << ": ";
        cin >> dt[i];
    }
    return dt;
}

void XuatDaThuc(const DaThuc& dt) 
{
    int bac = dt.size() - 1;
    for (int i = bac; i > 0; i--) 
    {
        cout << dt[i] << "x^" << i << " + ";
    }
    cout << dt[0] << endl;
}

DaThuc TinhDu( DaThuc daThuc1, DaThuc daThuc2) 
{
    DaThuc du(daThuc1.size(), 0);
    int bacDaThuc1 = daThuc1.size() - 1;
    int bacDaThuc2 = daThuc2.size() - 1;
    while (bacDaThuc1 >= bacDaThuc2) 
    {
        int heSo = daThuc1[bacDaThuc1] / daThuc2[bacDaThuc2];
        int ex = bacDaThuc1 - bacDaThuc2;

        for (int i = 0; i <= bacDaThuc2; i++) 
        {
            du[i + ex] += heSo * daThuc2[i];
        }

        for (int i = 0; i <= bacDaThuc2; i++) 
        {
            daThuc1[i + ex] -= du[i + ex];
        }

        bacDaThuc1--;
    }

    return du;
}

int main() 
{
    int bacDaThuc1, bacDaThuc2;
    cout << "Nhap bac cua da thuc thu nhat: ";
    cin >> bacDaThuc1;
    DaThuc daThuc1 = NhapDaThuc(bacDaThuc1);
    cout << "Nhap bac cua da thuc thu hai: ";
    cin >> bacDaThuc2;
    DaThuc daThuc2 = NhapDaThuc(bacDaThuc2);
    DaThuc du = TinhDu(daThuc1, daThuc2);
    cout << "\nDa thuc thu nhat:\n";
    XuatDaThuc(daThuc1);
    cout << "\nDa thuc thu hai:\n";
    XuatDaThuc(daThuc2);
    cout << "\nDa thuc du:\n";
    XuatDaThuc(du);
    return 0;
}
