#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[8] = { 3,6,3,8,5,3,7,5 };
	int temp = 0, pos = 0;
	for (int i = 0; i < 8; i++)
	{
		if (a[i] > temp)
		{
			temp = a[i];
			pos = i;
		}			
	}
	printf("So lon nhat la %d\n", temp);
	printf("Tai vi tri %d trong mang", pos);
}
