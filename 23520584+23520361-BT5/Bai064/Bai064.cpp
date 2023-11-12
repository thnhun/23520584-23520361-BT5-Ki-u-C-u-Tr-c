#include<iostream>
using namespace std;

struct Sophuc
{
	float thuc;
	float ao;
};
typedef struct Sophuc SOPHUC;

void Nhap(SOPHUC&);

int main()
{
	SOPHUC a;
	Nhap(a);
	return 0;
}
void Nhap(SOPHUC& x)
{
	cout << "Nhap phan thuc: ";
	cin >> x.thuc;
	cout << "Nhap phan ao: ";
	cin >> x.ao;
}