#include <stdio.h>

//Function: find postion of a string on a larger string
//Input: Origin string, size of origin string, string need to find, sinze of that string
//Output: Position of that string
int subStr(char* str, int size_str, char* sub, int size_sub)
{
	for (int i = 0; i < size_str; i++)
	{
		int n = 0;
		while (str[i + n] == sub[n])
		{
			n++;
			if (n == size_sub && str[i+n] ==' ')
				return i;
		}
	}
	return -1;
}

int main()
{
	char str[] = "Xin chao cac ban";
	char sub[] = "cac";
	int size_str = sizeof(str) / sizeof(str[0]) - 1;
	int size_sub = sizeof(sub) / sizeof(sub[0]) - 1;
	int i = subStr(str, size_str, sub, size_sub);
	if (i != -1)
		printf("Tim thay '%s' tai %d", sub, i);
	else
		printf("Khong tim thay '%s'", sub);
}