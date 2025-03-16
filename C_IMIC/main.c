#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void inNguyenTo(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int k = 0;
		for (int j = 1; j <= arr[i]; j++)
		{
			if (arr[i] % j == 0)
				k++;
		}
		if (k == 2)
			printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[] = { 1,7,6,4,5,8,7,3 };
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("Cac so nguyen to trong mang la:\n");
	inNguyenTo(arr, size);
}
