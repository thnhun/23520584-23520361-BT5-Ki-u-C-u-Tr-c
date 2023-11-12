#include <iostream>
using namespace std;
struct ngay {
	int ng;
	int th;
	int nm;
};
typedef struct ngay NGAY;
void Nhap(NGAY&, int&);
NGAY KeTiep(NGAY, int);
void Xuat(NGAY);
int main() {
	NGAY A;
	int k;
	Nhap(A, k);
	cout << "ngay ke tiep " << k << " ngay la: ";
	Xuat(KeTiep(A, k));
	return 1;
}
void Nhap(NGAY& x, int& k) {
	cout << "Nhap ngay: ";
	cin >> x.ng;
	cout << "Nhap thang: ";
	cin >> x.th;
	cout << "Nhap nam: ";
	cin >> x.nm;
	cout << "Nhap so ngay ke tiep: ";
	cin >> k;
}
int ktNhuan(NGAY x) {
	if (x.nm % 4 == 0 && x.nm % 100 != 0)
		return 1;
	if (x.nm % 400 == 0)
		return 1;
	return 0;
}
int SoNgayToiDaTrongNam(NGAY x) {
	if (ktNhuan(x))
		return 366;
	return 365;
}
int SoNgayToiDaTrongThang(NGAY x) {
	int ngaythang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (ktNhuan(x))
		ngaythang[1] = 29;
	return ngaythang[x.th - 1];
}
int SoThuTuTrongNam(NGAY x) {
	int stt = 0;
	for (int i = 1; i <= x.th - 1; i++) {
		NGAY temp = { 1,i,x.nm };
		stt += SoNgayToiDaTrongNam(temp);
	}
	return (stt + x.ng);
}
int SoThuTu(NGAY x) {
	int stt = 0;
	for (int i = 1; i <= x.nm - 1; i++) {
		NGAY temp = { 1,1,i };
		stt = stt + SoNgayToiDaTrongNam(temp);
	}
	return (stt + SoThuTuTrongNam(x));
}
NGAY TimNgay(int nam, int stt) {
	NGAY temp = { 1,1,nam };
	temp.th = 1;
	while (stt - SoNgayToiDaTrongThang(temp) > 0) {
		stt = stt - SoNgayToiDaTrongThang(temp);
		temp.th++;
	}
	temp.ng = stt;
	return temp;
}
NGAY TimNgay(int stt) {
	int nam = 1;
	int sn = 365;
	while (stt - sn > 0) {
		stt = stt - sn;
		nam++;
		NGAY temp = { 1,1,nam };
		sn = SoNgayToiDaTrongNam(temp);
	}
	return TimNgay(nam, stt);
}
NGAY KeTiep(NGAY x, int k) {
	int stt = SoThuTu(x);
	stt = stt + k;
	return TimNgay(stt);
}
void Xuat(NGAY x) {
	cout << "\nNgay: " << x.ng;
	cout << "\nThang: " << x.th;
	cout << "\nNam: " << x.nm;
}