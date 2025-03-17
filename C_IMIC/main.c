#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count_space(char str[])
{
	int n = 0, k = 0;
	while (str[n] != 0)
	{
		if (str[n] == ' ' && n != 0)
			k++;
		n++;
	}
	return k + 1;
}


int main()
{
	char str[50];
	scanf(" %[^\n]", str);
	int k = count_space(str);
	printf("Cau tren co %d tu", k);
}