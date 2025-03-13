#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[10] = { 0 };
	int tong = 0, s = 0;
	for (int i = 0; i < 10; i++)
	{
		printf("Nhap so %d: ", i);
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 8; i++)
	{
		if (arr[i] > arr[i + 1])
			arr[i + 1] = arr[i];
		else arr[i + 1] = arr[i + 1];
		s = arr[i + 1];
	}
	printf("%d", s);
}