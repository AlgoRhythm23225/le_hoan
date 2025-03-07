#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void main()
{
	int a;
	char c;
	while(1)
	{
		printf("Enter a number: ");
		if (scanf("%d%c", &a, &c) != 2 || c != '\n')
		{
			printf("Invalid\n");
			while (getchar() != '\n');
			continue;
		}
		if (a % 2 == 0)
		{
			printf("So chan\n");
		}
		else
		{
			printf("So le\n");
		}
	}
}
