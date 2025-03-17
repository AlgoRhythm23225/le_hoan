#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void find_c(char str[])
{
	int n = 0, k = 0;
	int pos[50];
	while (str[n] != 0)
	{
		if (str[n] == 'c' || str[n] == 'C')
		{
			k++;
			pos[k] = n;
		}
		n++;
	}
	printf("Co %d ky tu c\nTai cac vi tri: ", k);
		for (int i = 1; i <= k; i++)
		{
			printf("%d ", pos[i]);
		}
}

int main()
{	
	char str[50];
	int pos[50];
	scanf(" %[^\n]", str);
	find_c(str);
}