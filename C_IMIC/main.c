#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef enum 
{
	NAM,
	NU
}gioi_tinh_t;
char* convert_gioiTinh_string[] = { "Nam", "Nu" };

typedef enum
{
	GIOI,
	KHA,
	TRUNG_BINH,
	YEU
}loai_t;
char* convert_loai_string[] = { "Gioi", "Kha", "Trung binh", "Yeu" };

typedef struct 
{
	char* ten;
	int tuoi;
	gioi_tinh_t gioi_tinh;
	float diem_toan;
	float diem_van;
	loai_t loai;
}hoc_sinh_t;

void xep_loai(hoc_sinh_t* hs, int so_luong)
{
	float tb = 0;
	for (int i = 0; i < so_luong; i++) 
	{
		tb = (hs[i].diem_toan + hs[i].diem_van) / 2;
		if (tb >= 8) {
			hs[i].loai = GIOI;
		}
		else if (tb >= 6.5) {
			hs[i].loai = KHA;
		}
		else if (tb >= 5) {
			hs[i].loai = TRUNG_BINH;
		}
		else {
			hs[i].loai = YEU;
		}
	}
}

void in_ds(hoc_sinh_t* hs, int so_luong)
{
	for (int i = 0; i < so_luong; i++)
	{
		printf("Ten: %s ", hs[i].ten);
		printf("Tuoi: %d ", hs[i].tuoi);
		printf("Gioi tinh: %-4s", convert_gioiTinh_string[hs[i].gioi_tinh]);
		printf("Diem toan: %.1f ", hs[i].diem_toan);
		printf("Diem van: %.1f ", hs[i].diem_van);
		printf("Diem trung binh: %.1f ", (hs[i].diem_toan + hs[i].diem_van) / 2);
		printf("Xep loai: %s ", convert_loai_string[hs[i].loai]);
		printf("\n");
	}
}

int main() 
{
	hoc_sinh_t arr[] = {
		{"Nguyen Van A", 18, NAM, 6.7, 8.7},
		{"Nguyen Thi B", 18, NU, 8.2, 9.7},
		{"Nguyen Van C", 18, NAM, 5.4, 6.7}
	};
	
	xep_loai(arr, 3);
	in_ds(arr, 3);
}