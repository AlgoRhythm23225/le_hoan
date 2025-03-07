#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main()
{
	float a, b, c, delta, x1, x2;
	while (1)
	{
		printf("Nhap cac he so a, b ,c (nhap ky tu de thoat): ");
		if (scanf("%f %f %f", &a, &b, &c) != 3)
		{
			printf("Thoat chuong trinh");
			break;
		}

		delta = b * b  - 4 * a * c;
		printf("delta = %.2f\n", delta);
		if (delta > 0)
		{
			x1 = (-b - sqrt(delta)) / (2 * a);
			x2 = (-b + sqrt(delta)) / (2 * a);
			printf("Phuong trinh co 2 nghiem phan biet x1 = %.2f, x2 = %.2f\n", x1, x2);
		}
		else if (delta == 0)
		{
			x1 = -b / (2 * a);
			printf("Phuong trinh co 1 nghiem x = %.2f\n", x1);
		}
		else
		{
			printf("Phuong trinh vo nghiem\n");
		}
	}
}
