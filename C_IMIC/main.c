#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	printf("Nhap 2 so: ");
	scanf("%d%d", &a, &b);
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	printf("Uoc chung lon nhat la: %d", a);
}