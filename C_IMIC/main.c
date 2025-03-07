#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int n,s;
	printf("Enter password: ");
	scanf("%d", &n);
	switch (n)
	{
	case 1234:
		printf("Enter the number of money you want to withdraw: ");
		scanf("%d", &s);
		if (s > 10000)
		{
			printf("To much");
		}
		else
		{
			printf("Please take your %d", s);
		}
		break;
	default:
		printf("Wrong password");
		break;
	}		
}
