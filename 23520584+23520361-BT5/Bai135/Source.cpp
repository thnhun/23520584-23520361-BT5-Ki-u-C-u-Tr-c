#include <iostream>
using namespace std;

struct DIEM
{
	float x;
	float y;
};
typedef struct DIEM DIEM;

struct TAMGIAC
{
	DIEM A;
	DIEM B;
	DIEM C;
};
typedef struct TAMGIAC TAMGIAC;

void Nhap(DIEM &);
void Nhap(TAMGIAC &);
void Xuat(DIEM);
void Xuat(TAMGIAC);

int main()
{
	TAMGIAC tg;
	Nhap(tg);
	Xuat(tg);
	return 0;
}

void Nhap(DIEM &d)
{
	cout << "Nhap hoanh do: ";
	cin >> d.x;
	cout << "Nhap tung do: ";
	cin >> d.y;
}

void Nhap(TAMGIAC &t)
{
	cout << "Nhap dinh A:\n";
	Nhap(t.A);
	cout << "Nhap dinh B:\n";
	Nhap(t.B);
	cout << "Nhap dinh C:\n";
	Nhap(t.C);
}

void Xuat(DIEM d)
{
	cout << "(" << d.x << ", " << d.y << ")";
}

void Xuat(TAMGIAC t)
{
	cout << "\nToa do dinh A:";
	Xuat(t.A);
	cout << "\nToa do dinh B:";
	Xuat(t.B);
	cout << "\nToa do dinh C:";
	Xuat(t.C);
}