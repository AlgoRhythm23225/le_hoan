#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	float m, a, tien_lai = 0;
	printf("Nhap so tien can gui: ");
	scanf("%f", &m);
	printf("Nhap so nam gui: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		tien_lai = 8.2 / 100 * m;
		m += tien_lai;
	}
	printf("So tien lai sau %d nam la %.f", n, m);
}
