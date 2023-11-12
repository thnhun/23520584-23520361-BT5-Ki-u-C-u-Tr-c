#include <iostream>
using namespace std;

struct DiemKhongGian
{
	float x;
	float y;
	float z;
};
typedef struct DiemKhongGian DIEMKHONGGIAN;

void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN n;
	Nhap(n);
	cout << "\nDiem vua nhap:";
	Xuat(n);
	return 1;
}

void Nhap(DIEMKHONGGIAN& f)
{
	cout << "Nhap hoanh do: ";
	cin >> f.x;
	cout << "Nhap tung do: ";
	cin >> f.y;
	cout << "Nhap cao do: ";
	cin >> f.z;
}

void Xuat(DIEMKHONGGIAN f)
{
	cout << "\nHoanh do: " << f.x;
	cout << "\nTung do: " << f.y;
	cout << "\nCao do: " << f.y;
}