#include<iostream>
#include<string>
using namespace std;

struct NhanVien
{
	string MaSo;
	string HoTen;
	float Luong;
};
typedef struct NhanVien NHANVIEN;

void Nhap(NHANVIEN&);
void Xuat(NHANVIEN);

void Nhap(NHANVIEN[], int&);
void Xuat(NHANVIEN[], int);
float LuongCaoNhat(NHANVIEN[], int);
int TimNhanVien(NHANVIEN[], int);
float TongLuong(NHANVIEN[], int);
void HoanVi(float, float);
void SapXep(NHANVIEN[], int);

int main()
{
	int n;
	NHANVIEN a[100];

	//cai a
	Nhap(a, n);

	//cau b
	Xuat(a, n);

	//cau c:
	if (TimNhanVien(a, n) == -1)
		cout << "\nKhong co.";
	else
		Xuat(a[TimNhanVien(a, n)]);

	//cau d
	cout << "\nTong luong nhan vien la: " << TongLuong(a, n);

	//cau e
	SapXep(a, n);
	cout << "\nMang sau khi da sap xep:";
	Xuat(a, n);
	return 0;
}

void Nhap(NHANVIEN& x)
{
	cout << "Nhap ma nhan vien: ";
	cin.ignore();
	getline(cin, x.MaSo);
	cout << "Nhap ten nhan vien: ";
	cin.ignore();
	getline(cin, x.HoTen);
	cout << "Nhap luong nhan vien: ";
	cin >> x.Luong;
}
void Xuat(NHANVIEN x)
{
	cout << "\nMa nhan vien: " << x.MaSo << endl;
	cout << "Ten nhan vien: " << x.HoTen << endl;
	cout << "Luong: " << x.Luong << endl;;
}
void Nhap(NHANVIEN a[], int& n)
{
	cout << "Nhap so luong nhan vien: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhan vien thu " << i + 1 << " la:\n";
		Nhap(a[i]);
	}
}
void Xuat(NHANVIEN a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhan vien thu " << i + 1 << " la:\n";
		Xuat(a[i]);
	}
}
float LuongCaoNhat(NHANVIEN a[], int n)
{
	float max = a[0].Luong;
	for (int i = 0; i < n; i++)
		if (max < a[i].Luong)
			max = a[i].Luong;
	return max;
}
int TimNhanVien(NHANVIEN a[], int n)
{
	if (n == 0)
		return -1;
	float max = a[0].Luong;
	for (int i = 0; i < n; i++)
	{
		float max = LuongCaoNhat(a, n);
		for (int i = 0; i < n; i++)
			if (a[i].Luong==max)
				return i;
		return -1;
	}
}
float TongLuong(NHANVIEN a[], int n)
{
	float s = 0;
	for (int i = 0; i < n; i++)
		s += a[i].Luong;
	return  s;
}
void HoanVi(NHANVIEN& a, NHANVIEN& b)
{
	NHANVIEN temp = a;
	a = b;
	b = temp;
}
void SapXep(NHANVIEN a[], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].Luong < a[j].Luong)
				HoanVi(a[i], a[j]);
}