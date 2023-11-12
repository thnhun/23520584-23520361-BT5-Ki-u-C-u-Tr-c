#include<iostream>
using namespace std;

struct Sophuc
{
	float thuc;
	float ao;
};
typedef struct Sophuc SOPHUC;

void  Nhap(SOPHUC&);
void Xuat(SOPHUC);
SOPHUC LuyThua(SOPHUC, int);

int main()
{
	SOPHUC a, kq;
	int n;
	cout << "Nhap so mu n: ";
	cin >> n;
	Nhap(a);
	kq = LuyThua(a, n);
	Xuat(kq);
	return 0;
}

void Nhap(SOPHUC& x)
{
	cout << "Nhap phan thuc: ";
	cin >> x.thuc;
	cout << "Nhap phan ao: ";
	cin >> x.ao;
}
void Xuat(SOPHUC x)
{
	cout << "\nKet qua la: " << x.thuc << " + " << x.ao << "i";
}
SOPHUC Tich(SOPHUC a, SOPHUC b) 
{
	SOPHUC kq;
	kq.thuc = a.thuc * b.thuc - a.ao * b.ao;
	kq.ao = a.thuc * b.ao + a.ao * b.thuc;
	return kq;
}
SOPHUC LuyThua(SOPHUC x, int n)
{
	SOPHUC kq = { 1, 0 };

	for (int i = 0; i < n; i++)
	{
		kq = Tich(kq, x);
	}
	return kq;
}