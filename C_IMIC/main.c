#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct
{
	char* ten;
	int tuoi;
	float diem_toan;
	float diem_van;
	float diem_tb;
	float xep_loai;
}Hoc_sinh_t;

//Chuc nang: Tinh diem trung binh va xep loai cua tat ca hoc sinh trong mang
//Input: 
//	hoc_sinh_t* hoc_sinh - dia chi bat dau cua mang hoc sinh 
//	int so_luong - so luong hoc sinh
//Output: None
void xepLoai(Hoc_sinh_t* hoc_sinh, int so_luong)
{

	for (int i = 0; i < so_luong; i++)
	{
		hoc_sinh[i].diem_tb = (hoc_sinh[i].diem_toan + hoc_sinh[i].diem_van) / 2;
		if (hoc_sinh[i].diem_tb >= 8.0)
			hoc_sinh[i].xep_loai = 0;
		else if (hoc_sinh[i].diem_tb >= 6.5)
			hoc_sinh[i].xep_loai = 1;
		else if (hoc_sinh[i].diem_tb >= 5.0)
			hoc_sinh[i].xep_loai = 2;
		else hoc_sinh[i].xep_loai = 3;		 
	}
}

//Chuc nang: Tim hoc sinh co diem trung binh cao nhat
//Input: 
//	hoc_sinh_t* hoc_sinh - dia chi bat dau cua mang hoc sinh 
//	int so_luong - so luong hoc sinh
//Output: (hoc_sinh_t)
char MVP(Hoc_sinh_t* hoc_sinh, int so_luong)
{
	float diem_tb_max = 0;
	int vi_tri = 0;
	for (int i = 0; i < so_luong; i++)
	{
		if (hoc_sinh[i].diem_tb > diem_tb_max)
			diem_tb_max = hoc_sinh[i].diem_tb;
		vi_tri = i;
	}
	printf("%s", hoc_sinh[vi_tri].ten);
}

int main()
{
	Hoc_sinh_t hoc_sinh[] = {
		{"Quang", 15, 8, 9,},
		{"Duc", 14, 6, 9},
		{"Linh", 15, 6, 7.5},
		{"Mai", 14, 8.6, 4}
	};
}