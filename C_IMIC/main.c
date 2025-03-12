#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = n - 1; i >= 0; i--)
	{
		printf("%d ", i);
	}
}
