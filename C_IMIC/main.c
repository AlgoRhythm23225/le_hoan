#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    for (int i = 2; i <= 9; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, j * i);
        } 
    } 
    return 0;
}
