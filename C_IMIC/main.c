#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, i = 0;
	do
	{
		printf("Enter a number: ");
		scanf("%d", &n);
		i+=1;
	} while (n != 0 && i != 5);
}
