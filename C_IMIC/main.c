#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void first_letter_caps(char str[])
{
	int n = 0, k = 0;
	while (str[n] != 0)
	{
		if (str[n] == ' ')
			str[n + 1] -= 32;
		if (str[n] >= 'A' && str[n] <= 'Z' && str[n - 1] != ' ')
			str[n] += 32;
		n++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
}


int main()
{	
	char str[50];
	scanf(" %[^\n]", str);
	first_letter_caps(str);
	printf("%s", str);
}