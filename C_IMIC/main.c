#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	while (1)
	{
		//Tich phan chay bang com
		double a, b, s = 0;
		printf("Nhap a và b: ");
		scanf("%lf%lf", &a, &b);
		double h = (b - a) / 1000;
		int i = 0;
		do
		{		
			s += (pow(a + i * h, 2) + pow(a + (i + 1) * h, 2)) * h / 2;
			i++;
		} while (i != 999);
		printf("Chia nho: %.lf\n", s);

		//Tich phan bang cong thuc

		double s2;
		double sai_so;
		s2 = pow(b, 3) / 3 - pow(a, 3) / 3;
		sai_so = 100 * fabs((s2 - s) / s2);
		printf("Ly tuong: %.lf\nSai so: %.2lf%%\n", s2, sai_so);
	}

}