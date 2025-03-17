#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pos_swap(int arr[], int a, int b)
{
	int temp1 = 0, pos1 = 0, temp2 = 0, pos2 = 0;
	for (int i = 0; i < 14; i++)
	{
		if (arr[i] == a)
		{
			temp1 = a;
			pos1 = i;
		}
		if (arr[i] == b)
		{
			temp2 = b;
			pos2 = i;
		}
	}
	arr[pos1] = temp2;
	arr[pos2] = temp1;
}

int main()
{
	int arr[] = { 1,4,2,6,8,7,0,12,14,17,19,25,74,58 };
	int a, b;
	for (int i = 0;i<14;i++)
	{ 
		printf("%d ", arr[i]);
	}
	printf("\nNhap 2 so trong mang ban muon thay doi vi tri: ");
	scanf("%d%d", &a, &b);
	pos_swap(arr, a, b);
	for (int i = 0; i < 14; i++)
	{
		printf("%d ", arr[i]);
	}
}
