#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char ten[40];
	int tuoi;
	char gioi_tinh[6];
	float diem_toan;
	float diem_van;
	float diem_tb;
	int xep_loai;
}hoc_sinh_t;

//Chuc nang	: In danh sach hoc sinh
//Input		: hocsinh, n 
//Output	: -  
void in_danh_sach(hoc_sinh_t* hocsinh, int so_luong);
//Chuc nang	: In hoc sinh top 1
//Input		: hocsinh, n 
//Output	: -  
void in_top_1(hoc_sinh_t* hocsinh, int so_luong);
//Chuc nang	: In danh sanh xep hang theo diem trung binh
//Input		: hocsinh, n 
//Output	: -  
void in_sort(hoc_sinh_t* hocsinh, int so_luong);

int main()
{
	int n;
	printf("Nhap so hoc sinh: ");
	scanf("%d", &n);
	hoc_sinh_t* hocsinh = (hoc_sinh_t*)malloc(n * sizeof(hoc_sinh_t));
	for (int i = 0; i < n; i++)
	{
		printf("Nhap hoc sinh thu %d: ", i + 1);
		scanf(" %[^\n]", hocsinh[i].ten);
		printf("Nhap tuoi: ");
		scanf("%d", &hocsinh[i].tuoi);
		printf("Gioi tinh: ");
		scanf("%s", hocsinh[i].gioi_tinh);
		printf("Diem toan: ");
		scanf("%f", &hocsinh[i].diem_toan);
		printf("Diem van: ");
		scanf("%f", &hocsinh[i].diem_van);
		printf("\n");
	}

	in_danh_sach(hocsinh, n);
	in_top_1(hocsinh, n);
	in_sort(hocsinh, n);
}

void in_danh_sach(hoc_sinh_t* hocsinh,int so_luong)
{
	for (int i = 0; i < so_luong; i++)
	{
		printf("Hoc sinh thu %d:\n",i + 1);
		printf("Ten: %s\n", hocsinh[i].ten);
		printf("Tuoi: %d\n", hocsinh[i].tuoi);
		printf("Gioi tinh: %s\n", hocsinh[i].gioi_tinh);
		printf("Diem toan: %.1f\n", hocsinh[i].diem_toan);
		printf("Diem van: %.1f\n", hocsinh[i].diem_van);
		hocsinh[i].diem_tb = (hocsinh[i].diem_toan + hocsinh[i].diem_van) / 2;
		printf("Diem trung binh: %.1f\n", hocsinh[i].diem_tb);
		if (hocsinh[i].diem_tb >= 8)
			printf("Xep loai: Gioi");
		else if (hocsinh[i].diem_tb >= 6.5)
			printf("Xep loai: Kha");
		else if (hocsinh[i].diem_tb >= 5)
			printf("Xep loai: Trung binh");
		else printf("Xep loai: Yeu");
		printf("\n\n");
	}
}

void in_top_1(hoc_sinh_t* hocsinh, int so_luong)
{
	float diem_tb_max = 0;
	int vi_tri = 0;
	for (int i = 0; i < so_luong; i++)
	{
		if (hocsinh[i].diem_tb > diem_tb_max)
		{
			diem_tb_max = hocsinh[i].diem_tb;
			vi_tri = i;
		}
	}
	printf("Hoc sinh %s co diem trung binh cao nhat la: %.1f\n\n", hocsinh[vi_tri].ten, diem_tb_max);
}

void in_sort(hoc_sinh_t* hocsinh, int so_luong)
{
	for (int i = 0; i < so_luong; i++)
	{
		for (int j = i + 1; j < so_luong; j++)
		{
			char temp_ten[40] = " ";
			float temp_diem_tb = 0;
			if (hocsinh[j].diem_tb > hocsinh[i].diem_tb)
			{
				//Doi vi tri diem trung binh
				temp_diem_tb = hocsinh[i].diem_tb;
				hocsinh[i].diem_tb = hocsinh[j].diem_tb;
				hocsinh[j].diem_tb = temp_diem_tb;
				
				//Doi vi tri ten
				strcpy(temp_ten, hocsinh[i].ten);
				strcpy(hocsinh[i].ten, hocsinh[j].ten);
				strcpy(hocsinh[j].ten, temp_ten);

				
			}
		}
	}

	for (int i = 0; i < so_luong; i++)
	{
		printf("%d. %s %.1f\n", i + 1, hocsinh[i].ten, hocsinh[i].diem_tb);
	}
}