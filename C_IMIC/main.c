#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[8] = { -3,6,3,-8,5,3,-7,5 };
	for (int i = 0; i < 8; i++)
	{
		if (a[i] < 0)
			a[i] = 0;
		printf("%d ", a[i]);	
	}

	printf("\nSo am da doi thanh 0, tai cac vi tri: ");

	for (int i = 0; i < 8; i++)
	{
		if (a[i] == 0)
			printf("%d ", i);
	}

}
