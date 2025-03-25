#include <stdio.h>

// bài 1: ?i?m s? ký t? trong chu?i
// input:
//	char* str: chu?i c?n tìm 
// output: int s? l??ng ký t? trong chu?i
int Tim_So_Ky_Tu(char* str)
{
	int diem = 0;
	while (str[diem] != 0)
	{
		diem++;
	}
	return diem;
}


// bài 6: tìm ký t? c trong chu?i str
// input:
//	char* str : chu?i c?n tìm
//	char c	  : ký t? c?n tìm
// output: char* ??a ch? c?a c trong str
char* Tim_Ky_Tu(char* str, char c)
{
	int chieu_dai_chuoi = Tim_So_Ky_Tu(str);
	for (int i = 0; i < chieu_dai_chuoi; i++)
	{
		if (str[i] == c)
			return str + i;
	}
	return 0;
}

// bài 7: tìm chu?i subStr trong chu?i str
// input:
//	char* str: chu?i l?n c?n tìm
//	char* subStr: chu?i nh? c?n tìm
// output: char* ??a ch? c?a subStr trong str
char* Tim_Chuoi(char* str, char* subStr)
{
	int chieu_dai_str = Tim_So_Ky_Tu(str);
	int chieu_dai_subStr = Tim_So_Ky_Tu(subStr);
	for (int i = 0; i < chieu_dai_str; i++)
	{
		int j = 0;
		for (; j < chieu_dai_subStr; j++)
		{
			if (str[i + j] != subStr[j])
				break;
		}
		if (j == chieu_dai_subStr)
			return str + i;
	}
	return 0;
}

void main()
{
	int x = cong(3, 4);
	printf("%d", x);
}