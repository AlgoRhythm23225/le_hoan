#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	char ten[50];
	int tuoi;
	char gioi_tinh[7];
	float diem_toan;
	float diem_van;
	float diem_tb;
}hoc_sinh_t;

void main()
{
	//Mơ file
	FILE* csv = fopen("DanhSachHocSinh.csv", "r");
	if (!csv)
	{
		printf("Unable to open file");
		return;
	}
	else
	{
		printf("Mo file thanh cong\n");
	}

	hoc_sinh_t danh_sach[10] = { 0 };
	int stt = 0;
	char c;
	char buffer[50] = { 0 };
	int buffer_index = 0;
	int field = 0;
	while ((c = fgetc(csv)) != EOF)
	{
		if (c != ',' && c != '\n')
		{
			buffer[buffer_index++] = c;
		}
		else
		{
			switch (field)
			{
			case 0:
				strcpy(danh_sach[stt].ten, buffer);
				break;
			case 1:
				danh_sach[stt].tuoi = atoi(buffer);
				break;
			case 2:
				strcpy(danh_sach[stt].gioi_tinh, buffer);
				break;
			case 3:
				danh_sach[stt].diem_toan = atof(buffer);
				break;
			case 4:
				danh_sach[stt].diem_van = atof(buffer);
				break;
			}
			field++;
			buffer_index = 0;
			memset(buffer, 0, sizeof(buffer));
		}
		if (c == '\n')
		{
			danh_sach[stt].diem_tb = (danh_sach[stt].diem_toan + danh_sach[stt].diem_van) / 2;
			field = 0;
			stt++;
		}

	}
	//In ra thong tin va tim ra hoc sinh co diem trung binh cao nhat
	float diem_tb_temp = 0;
	int index_of_max;
	for (int i = 0; i < stt; i++)
	{
		printf("%-14s ", danh_sach[i].ten);
		printf("%d ", danh_sach[i].tuoi);
		printf("%-3s ", danh_sach[i].gioi_tinh);
		printf("%-4.1f ", danh_sach[i].diem_toan);
		printf("%-4.1f ", danh_sach[i].diem_van);
		printf("%-4.1f\n", danh_sach[i].diem_tb);
		if (danh_sach[i].diem_tb > diem_tb_temp)
		{
			diem_tb_temp = danh_sach[i].diem_tb;
			index_of_max = i;
		}
	}
	printf("Hoc sinh co diem trung binh cao nhat la %s voi %.1f diem\n\n", danh_sach[index_of_max].ten, danh_sach[index_of_max].diem_tb);

	//Sap xep theo diem trung binh
	hoc_sinh_t danh_sach_temp = { 0 };
	for (int i = 0; i < stt; i++)
	{
		for (int j = i; j < stt; j++)
		{
			if (danh_sach[j].diem_tb > danh_sach[i].diem_tb)
			{
				danh_sach_temp = danh_sach[i];
				danh_sach[i] = danh_sach[j];
				danh_sach[j] = danh_sach_temp;
			}
		}
	}
	printf("Sap xep danh sach theo diem trung binh:\n");
	for (int i = 0; i < stt; i++)
	{
		printf("%-14s ", danh_sach[i].ten);
		printf("%d ", danh_sach[i].tuoi);
		printf("%-3s ", danh_sach[i].gioi_tinh);
		printf("%-4.1f ", danh_sach[i].diem_toan);
		printf("%-4.1f ", danh_sach[i].diem_van);
		printf("%-4.1f\n", danh_sach[i].diem_tb);
	}
	printf("\n");

	//Mo file de write
	FILE* csv_2 = fopen("DanhSachHocSinh2.csv", "w");
	if (!csv_2)
	{
		printf("Mo file khong thanh cong");
		return;
	}
	else
	{
		printf("Mo file DanhSachHocSinh2.csv thanh cong\n");
	}

	//Ghi du lieu vao file
	for (int i = 0; i < stt; i++)
	{
		fprintf(csv_2, "%s,%d,%s,%.1f,%.1f,\n",
			danh_sach[i].ten,
			danh_sach[i].tuoi,
			danh_sach[i].gioi_tinh,
			danh_sach[i].diem_toan,
			danh_sach[i].diem_van);
	}

	fclose(csv);
}