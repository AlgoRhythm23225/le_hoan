#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	xu_ly_chuoi(char* str_format)
{
	char* tu_khoa = "led_2: ";
	char* a;
	a = strstr(str_format, tu_khoa);
	a += strlen(tu_khoa);
	int i = 0;
	while (a[i] != ',')
	{
		i++;
	}

	char* str = malloc(i + 1);
	memset(str, 0, i + 1);
	memcpy(str, a, i);

	if (strcmp(str, "on") == 0)

	{
		free(str)
		return 1;
	}
	else if (strcmp(str, "off") == 0)
		return 0;
	

}

int main()
{
	char* str = "led_1: on, led_2: off, led_3: on";
	xu_ly_chuoi(str);
}

