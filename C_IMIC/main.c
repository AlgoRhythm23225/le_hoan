#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void main()
{
	float a;
	char c;
	while (1)
	{
		printf("Nhap so kWh su dung: ");
		if (scanf("%f%c", &a, &c) != 2 || c != '\n')
		{
			printf("Vui long nhap so\n");
			while (getchar() != '\n');
			continue;
		}		 
		if (a < 0)
		{
			printf("Nhap cai gi day\n");
		}
		else if (a == 0)
		{
			printf("Thang nay khong dung dien ha\n");
		}
		else if (a > 0 && a <= 50)
		{
			printf("Thang nay het %.f tien dien\n", a * 1678);
		}
		else if (a >= 51 && a <= 100)
		{
			printf("Thang nay het %.f tien dien\n", 50 * 1678 + ( a - 50 ) * 1734);
		}
		else if (a >= 101 && a <= 200)
		{
			printf("Thang nay het %.f tien dien\n", 50 * 1678 + 50 * 1734 + ( a - 100 ) * 2014);
			}
		else if (a >= 201 && a <= 300)
		{
			printf("Thang nay het %.f tien dien\n", 50 * 1678 + 50 * 1734 + 100 * 2014 + ( a - 200 ) * 2536);
		}
		else if (a >= 301 && a <= 400)
		{
			printf("Thang nay het %.f tien dien\n", 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + ( a - 300 ) * 2834);
		}
		else
		{
			printf("Thang nay het %.f tien dien\n", 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + ( a - 400 ) * 2927);
		}	
	}
}
