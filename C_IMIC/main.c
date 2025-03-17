#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void cap(char str[])
{
	int n = 0;
	while (str[n] != 0)
	{
		n++;
	}
	for (int i = 0; i < n; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
}


int main()
{
	char str[100];
	printf("Enter something: ");
	scanf(" %[^\n]", str);
	cap(str);
	printf("%s", str);
}