#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void inMax(int arr[], int size)
{
	int temp = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > temp)
			temp = arr[i];
	}
	printf("So lon nhat trong mang la:\n%d", temp);
}

int main()
{
	int arr[] = { 1,3,5,3,6,5,7,3,5,54,353,234 };
	int size = sizeof(arr) / sizeof(arr[0]);
	inMax(arr, size);
}
