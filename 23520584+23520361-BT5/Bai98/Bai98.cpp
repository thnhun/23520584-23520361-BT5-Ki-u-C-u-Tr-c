#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
struct ngay
{
	int ng;
	int th;
	int nm;
};
typedef struct ngay NGAY;
void Nhap(NGAY&);
void Nhap(NGAY& x)
{
	cout << "Nhap ngay: ";
	cin >> x.ng;
	cout << "Nhap thang: ";
	cin >> x.th;
	cout << "Nhap nam: ";
	cin >> x.nm;
}
int SoSanh(NGAY, NGAY);
int SoSanh(NGAY x, NGAY y)
{
	if (x.nm > y.nm)
		return 1;
	if (x.nm < y.nm)
		return -1;
	if (x.th > y.th)
		return 1;
	if (x.th < y.th)
		return -1;
	if (x.ng > y.ng)
		return 1;
	if (x.ng < y.ng)
		return -1;
	return 0;
}
int main()
{
	ngay A, B;
	int kq = SoSanh(A, B);
	cout << kq;
	return 0;
}
