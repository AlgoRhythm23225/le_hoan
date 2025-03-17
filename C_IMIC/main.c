#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count(char str[])
{
	int n = 0;
	while (str[n] != 0)
	{
		n++;
	}
	return n;
}

int main() 
{
	char str[50];
	while (1)
	{
		printf("Nhap chuoi: ");
		scanf(" %[^\n]", &str);
		int n = count(str);
		printf("%d\n", n);
	}
}
