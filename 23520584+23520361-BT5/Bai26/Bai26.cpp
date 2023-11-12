#include <iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
int ktTrung(DIEM, DIEM);
int main()
{
	DIEM A, B;
	cout << "\nNhap diem thu nhat :";
	Nhap(A);
	cout << "\nNhap diem thu hai :";
	Nhap(B);
	cout << "\nDiem thu nhat :";
	Xuat(A);
	cout << "\nDiem thu hai :" << endl;
	Xuat(B);
	if (ktTrung(A, B))
		printf("\nHai diem trung nhau.");
	else
		printf("\nHai diem khac nhau.");
	return 0;
}

void Nhap(DIEM& f)
{
	cout << "\nNhap hoanh do: ";
	cin >> f.x;
	cout << "\nNhap tung do: ";
	cin >> f.y;
}

void Xuat(DIEM f)
{
	cout << "\nHoanh do: " << f.x;
	cout << "\nTung do: " << f.y;
}

int ktTrung(DIEM P, DIEM Q)
{
	if (P.x == Q.x && P.y == Q.y)
		return 1;
	return 0;
}