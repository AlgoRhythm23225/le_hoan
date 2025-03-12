#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 0, s = 0;
	printf("Bao nhieu so nguyen dau tien? ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		s += i;
	}
	printf("Tong %d so nguyen dau tien la: %d\n", n, s);
	
	int a = 0, b = 0, h = 0;
	printf("Nhap min: ");
	scanf("%d", &a);
	printf("Nhap max: ");
	scanf("%d", &b);
	for (int i = a; i <= b; i++)
	{
		h += i;
	}
	printf("Tong cac so nguyen tu %d toi %d la %d", a, b, h);
}
