#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sort(int arr[])
{
	int temp = 0;
	for (int i = 0; i < 14; i++)
	{
		for (int j = i; j < 14; j++)
		{
			if (arr[j] < arr[i])
			{ 
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main()
{
	int arr[] = { 1,4,2,6,8,7,0,12,14,17,19,25,74,58 };
	for (int i = 0; i < 14; i++)
	{
		printf("%d ", arr[i]);
	}	
	sort(arr);
	printf("\n");
	for (int i = 0; i < 14; i++)
	{
		printf("%d ", arr[i]);
	}
}
