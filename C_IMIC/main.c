#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[] = "xiN cHao";
	int n = sizeof(str) - sizeof(str[0]), k = 0;
	printf("%d", n);
	for (int i = 0; i < n; i++)
	{
		if (str[i] > 65 && str[i] < 90)
			k++;
	}
	printf("Co %d ky tu viet hoa", k);
}