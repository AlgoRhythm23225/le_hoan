#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	while (1)
	{
		int s = 1;
		printf("Nhap n: ");
		scanf("%d", &n);
		for (int i = 1; i <= n; i++)
		{
			s *= i;
		}
		printf("Luy thua cua %d la: %d\n", n, s);
	}
}
