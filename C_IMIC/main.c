#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct
{
	char ten[40];
	int tuoi;
	float diem_toan;
	float diem_van;
	float diem_tb;
	int xep_loai;
}Hoc_sinh;

int main()
{
	Hoc_sinh hocsinh[] = {
		{"Quang", 15, 8, 9, 7.5, 0},
		{"Duc", 14, 6, 9, 7.5, 0},
		{"Linh", 15, 6, 7.5, 7.5, 0},
		{"Mai", 14, 8.6, 4, 7.5, 0}
	};

}