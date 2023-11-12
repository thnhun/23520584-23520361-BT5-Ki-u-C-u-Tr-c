#include<iostream>
using namespace std;

struct ngay
{
	int ngay;
	int thang;
	int nam;
};
typedef struct ngay NGAY;

void Nhap(NGAY&);
int ktNhuan(NGAY);

int main()
{
	NGAY x;
	Nhap(x);
	cout << ktNhuan(x);
	return 0;
}

void Nhap(NGAY& x)
{
	cout << "Nhap ngay: ";
	cin >> x.ngay;
	cout << "Nhap thang: ";
	cin >> x.thang;
	cout << "Nhap nam: ";
	cin >> x.nam;
}
int ktNhuan(NGAY x)
{
	bool dk1 = (x.nam % 4 == 0 && x.nam % 100 != 0);
	bool dk2 = (x.nam % 400 == 0);
	if (dk1 || dk2)
		return 1;
	return 0;
}