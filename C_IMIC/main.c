#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char* ten;
	int tuoi;
	int gioi_tinh;
	float diem_toan;
	float diem_van;
}hoc_sinh_t;

void main()
{
	hoc_sinh_t hs = { 0 };

	//Mo file
	FILE* csv = fopen("DanhSachHocSinh.csv", "r");
	if (!csv)
	{
		printf("Mo file khong thanh cong");
		return;
	}
	else
	{
		printf("Mo file thanh cong\n");
	}

	//read
	char c; 
	int comma_cnt = 0; //Dem so dau ',' cua 1 line
	
	char buffer_toan[3] = { 0 }; //Luu diem toan cua 1 line
	int buffer_index_toan = 0; //Index trong buffer toan
	int diem_toan[6] = { 0 };//Luu diem toan cua 1 file
	int toan_index = 0;

	char buffer_van[3] = { 0 }; //Luu diem vam cua 1 line
	int buffer_index_van = 0; //Index trong buffer van
	int diem_van[6] = { 0 };//Luu diem van cua 1 file
	int van_index = 0;

	while ((c = fgetc(csv)) != EOF)
	{
		while ((c = fgetc(csv)) != '\n')
		{
			if (c == ',')
			{
				comma_cnt++;
			}

			if (comma_cnt == 3 && c != ',')
			{
				buffer_toan[buffer_index_toan] = c;
				buffer_index_toan++;
			}	
			
			if (comma_cnt == 4 && c != ',')
			{
				buffer_van[buffer_index_van] = c;
				buffer_index_van++;
			}
		}
		diem_toan[toan_index] = atoi(buffer_toan);
		toan_index++;
		buffer_index_toan = 0;
		
		diem_van[van_index] = atoi(buffer_van);
		van_index++;
		buffer_index_van = 0;

		comma_cnt = 0;
	}

	float diem_tb[6] = { 0 };
	float temp = 0;
	float index;
	for (int i = 0; i < 5; i++)
	{
		diem_tb[i] = (diem_toan[i] + diem_van[i]) / 2.0f;
		if (diem_tb[i] > temp)
		{
			temp = diem_tb[i];
			index = i;
		}
	}
	printf("temp: %.1f - index: %d", temp, index);

	

	//Dong file
	fclose(csv);
}