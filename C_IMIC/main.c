#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0, n = 0;
	while (i != 1234)
	{
		printf("Enter password: ");
		scanf("%d", &i);
		n++;
		if (n == 3)
			break;
    }
	if (n == 3) printf("Please try again after 50 years");
	else printf("Correct");
}
