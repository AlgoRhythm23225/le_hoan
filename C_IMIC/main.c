#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void main()
{
	float a, tien_dien = 0;
	char c;
	while (1)
	{
		printf("Nhap so kWh: ");
		if (scanf("%f%c", &a, &c) != 2 || c != '\n')
		{
			printf("Vui long nhap so\n");
			while (getchar() != '\n');
			continue;
		}
		if (a < 0)
		{
			printf("Vui long nhap so duong\n");
			continue;
		}
		if (a == 0)
		{
			printf("Thang nay khong xai dien ha\n");
			continue;
		}
		if (a > 400)
		{
			tien_dien +=( a - 400) * 2927;
			a = 400;
		}
		if (a > 300)
			{
				tien_dien +=( a - 300) * 2834;
				a = 300;
			}
		if (a > 200)
			{
				tien_dien +=( a - 200) * 2536;
				a = 200;
			}
		if (a > 100)
			{
				tien_dien +=( a - 100) * 2014;
				a = 100;
			}
		if (a > 50)
			{
				tien_dien +=( a - 50) * 1734;
				a = 50;
			}
		tien_dien += a * 1678;
		printf("Thang nay het %.f tien dien\n", tien_dien);
	}
}
