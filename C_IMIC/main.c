#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count(char str[])
{
	int n = 0, k = 0;
	while (str[n] != 0)
	{
		if (str[n] == ' ')
			k++;
		n++;
	}
	return k;
}

int main() 
{
	char str[50];
	while (1)
	{
		printf("Nhap chuoi: ");
		scanf(" %[^\n]", &str);
		int k = count(str);
		printf("%d\n", k);
	}
}
