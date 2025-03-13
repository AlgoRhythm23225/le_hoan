#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[10] = { 0 };
	int s = 0, k = 0;
	for (int i = 0; i < 10; i++)
	{
		printf("Nhap so %d: ", i);
		scanf("%d", &arr[i]);
	}

	int so_lon_nhat = 0;
	int so_luong_doi_tuong = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < 10; i++)
	{
		if (so_lon_nhat < arr[i])
			so_lon_nhat = arr[i];	 
	}

	for (int i= 0; i < 10; i++)
	{
		if(arr[i]==so_lon_nhat)
			printf("%d ",i);
	}
}