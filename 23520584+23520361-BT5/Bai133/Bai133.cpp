#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

struct diem
{
	float x;
	float y;
	float z;
};

struct cau
{
	diem I;
	float R;
};

void nhap(diem&);
void xuat(diem);
void nhap(cau&);
void xuat(cau);
float kc(diem,diem);
bool kt(cau, diem);


int main()
{
	cau a;
	cout << "\nNhap hinh cau: " << endl;
	nhap(a);
	cout << "\nHinh cau: ";
	xuat(a);
	diem b;
	cout << "\nNhap diem: ";
	nhap(b);
	xuat(b);
	if (kt(a, b) == true)
		cout << "\nNam trong";
	else
		cout << "\nKhong nam trong";
	return 0;
}

void nhap(diem& a)
{
	cin >> a.x;
	cin >> a.y;
	cin >> a.z;
}

void xuat(diem a)
{
	cout <<"\n" << "(" << a.x << "," << a.y << "," << a.z << ")";
}

void nhap(cau& a)
{
	nhap(a.I);
	cin >> a.R;
}

void xuat(cau a)
{
	xuat(a.I);
	cout << "\nBan kinh: " << a.R;
}

float kc(diem P, diem Q)
{
	return sqrt((Q.x - P.x) * (Q.x - P.x) + (Q.y - P.y) * (Q.y - P.y) + (Q.z - P.z) * (Q.z - P.z));
}

bool kt(cau a, diem b)
{
	float kcc = kc(a.I, b);
	if (kcc <= a.R)
		return 1;
	return 0;
}