#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void main()
{
	char check;
	int a;
	printf("Nhap so nguyen khac 0\n");
	while (1)
	{
		if (scanf("%d%c", &a, &check) != 2 || check !='\n')
		{
			printf("Vui long nhap so nguyen\n");
			while (getchar() != '\n');
			continue;
		}
		if (a > 0)
		{
			printf("Ban vua nhap so duong\n");
		}
		else if (a == 0)
		{
			printf("Nhap 0 lam gi vay\n");
		}
		else
		{
			printf("Ban vua nhap so am\n");
		}
	}
}
