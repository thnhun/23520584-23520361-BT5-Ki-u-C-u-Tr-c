#include <iostream>
#include <iomanip>

using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC &);
void Xuat(SOPHUC);

int main()
{
	SOPHUC c;
	Nhap(c);
	Xuat(c);
	return 0;
}

void Nhap(SOPHUC &x)
{
	cout << "Nhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}

void Xuat(SOPHUC x)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nThuc: " << x.Thuc;
	cout << "\nAo: " << x.Ao;
}