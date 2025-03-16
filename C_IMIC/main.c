#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Cap phat tinh
	int a[12], s = 0;
	for (int i = 0; i < 12; i++)
	{
		printf("Nhap so thu %d: ", i);
		scanf("%d", &a[i]);
		if (a[i] % 2 != 0)
			s += a[i];
	}
	printf("%d", s);
}
