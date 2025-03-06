#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	float a, b;
	printf("Nhap gia tri cua a: ");
	scanf("%f", &a);
	printf("Nhap gia tri cua b: ");
	scanf("%f", &b);
	if (a-b > 0)
	{
		printf("a la so lon nhat");
	}
	else
	{
		printf("b la so lon nhat");
	}
}