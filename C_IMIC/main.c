#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, s = 0;
	printf("Nhap n so nguyen dau tien: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
			s += i;
	}
	printf("Tong cua %d so chan dau tien la: %d", n, s);
}
