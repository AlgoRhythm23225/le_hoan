#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 2; j <= 9; j++)
        {
            printf("%d x %d = %d  ", j, i, j * i);
        } 
        printf("\n");
    } 
}
