#include <iostream>
using namespace std;
struct diem {
	float x;
	float y;
	float z;
};
typedef struct diem DIEM;
struct duongthang {
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;
struct duongtron {
	DIEM I;
	float R;
};
typedef struct duongtron DUONGTRON;
