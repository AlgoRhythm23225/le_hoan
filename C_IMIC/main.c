#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[10];
	int tong = 0;
	for (int i = 0; i <= 10; i++)
	{
		printf("Nhap so %d: ", i);
		scanf("%d", &arr[i]);
	}

	for (int j = 0; j <= 10; j++)
	{
		tong += arr[j];
	}
	printf("%d", tong);
}