#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void so_le(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 != 0)
			printf("%d ",arr[i]);
	}
}

int main()
{
	int arr[] = { 1,2,4,3,7,6,8,5,6,7,5,4 };
	int size = sizeof(arr) / sizeof(arr[0]);
	so_le(arr, size);
}
