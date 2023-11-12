#include<iostream>
#include<string>
using namespace std;

struct SoPhuc
{
	float PhanThuc;
	float PhanAo;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);

int main()
{
	SOPHUC a;
	Nhap(a);
	Xuat(a);
	return 0;
}

void Nhap(SOPHUC& p)
{
	cout << "Nhap phan thuc: ";
	cin >> p.PhanThuc;
	cout << "Nhap phan ao: ";
	cin >> p.PhanAo;

}
void Xuat(SOPHUC p)
{
	cout << "\nThuc: " << p.PhanThuc;
	cout << "\nAo: " << p.PhanAo;
}