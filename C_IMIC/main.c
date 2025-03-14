#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int so_tien_rut;
	int n_500 = 0,
		n_200 = 0,
		n_100 = 0,
		n_50 = 0,
		s = 0;
	printf("Nhap so tien can rut (Boi so cua 50): ");
	while (scanf("%d", &so_tien_rut) != 1 || so_tien_rut % 50 != 0)
	{
		printf("Nhap lai: ");
		s++;
		if (s > 6 && s <=10)
			printf("May co rut tien khong?");
		if (s > 10)
			printf("Anh nhac em!");
	}
		
	while (so_tien_rut > 0)
	{
		if (so_tien_rut >= 500)
		{
			so_tien_rut -= 500;
			n_500++;
		}
		if (so_tien_rut >= 200)
		{
			so_tien_rut -= 200;
			n_200++;
		}
		if (so_tien_rut >= 100)
		{
			so_tien_rut -= 100;
			n_100++;
		}
		if (so_tien_rut >= 50)
		{
			so_tien_rut -= 50;
			n_50++;
		}		
	}
	printf("Da rut:\n%d to 500k\n%d to 200k\n%d to 100k\n%d to 50k", n_500, n_200, n_100, n_50);
}