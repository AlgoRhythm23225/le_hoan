#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[10] = { 0 };
	int tong = 0;
	for (int i = 0; i < 10; i++)
	{
		printf("Nhap so %d: ", i);
		scanf("%d", &arr[i]);
		tong += arr[i];
	}
	printf("%d", tong);
}