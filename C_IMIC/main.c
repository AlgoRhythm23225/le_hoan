#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	float a;
	printf("Nhap diem trung binh: ");
	scanf("%f", &a);
	if (a >= 8)
	{
		printf("Loai gioi");
	}
	else if (a >= 6.5 && a < 8)
	{
		printf("Loai kha");
	}
	else
	{
		printf("Loai trung binh");
	}
	
}