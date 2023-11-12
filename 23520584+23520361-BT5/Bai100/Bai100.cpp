#include<iostream>
using namespace std;

struct SoNgay
{
	int ngay;
	int thang;
	int nam;
};
typedef struct SoNgay SONGAY;

void Nhap(SONGAY&);
bool ktNhuan(int);
int Tinh(SONGAY);

int main()
{
	SONGAY date;
	Nhap(date);

	SONGAY kq;
	cout << "Ket qua la: " << Tinh(date);
	return 0;

}
void Nhap(SONGAY& x)
{
	cout << "Nhap ngay: ";
	cin >> x.ngay;
	cout << "Nhap thang: ";
	cin >> x.thang;
	cout << "Nhap nam:  ";
	cin >> x.nam;
}
bool ktNhuan(int x)
{
	bool dk1 = (x % 4 == 0 && x % 100 != 0);
	bool dk2 = (x % 400 == 0);
	if (dk1 || dk2)
		return true;
	return false;
}
int Tinh(SONGAY x)
{	
	int NgayTrongThang[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int days = 0;
	
	// tinh ngay tu nam 01 den (nam-1)
	for (int y = 1; y < x.nam; y++) 
		days += (ktNhuan(y) ? 366 : 365);

	for (int m = 1; m < x.thang; m++)
	{
		days += NgayTrongThang[m];
		if (m == 2 && ktNhuan(x.nam))
			days++;
	}

	days += x.ngay;
	return  days;
}