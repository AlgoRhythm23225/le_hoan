#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

float fx(float x)
{
	return x * x;
}

float gx(float x)
{
	return 2 * x * x + 3 * x + 1;
}

float tx(float x)
{
	return sin(x) + 1;
}

float tinhTichPhan(int a, int b, float (*f)(float))
{
	float h = (b - a) / 10000.0f;
	float S = 0;
	for (int i = 0; i < 1000; i++)
	{
		float db = f(a + i * h);
		float dl = f(a + (i + 1) * h);
		S += (dl + db) * h / 2;
	}
	return S;
}

float function_1(int x, char y)
{
	printf("Day la FUNCTION 1 x: %d, y: %d\n", x, y);
	return 3.14f;
}

typedef void (*pfunc)();

float function_2(int x, char y)
{
	printf("Day la FUNCTION 2 x: %d, y: %d\n", x, y);
	return 3.14f;
}

void function_3()
{
	printf("This is FUNCTION 3\n");
}

void main()
{
	//Khai bao 1 con tro ham, output float, input int vaf char
	float (*ten_con_tro_ham)(int, char);
	//Chuc nang 1: dung de chua dia chi ham
	ten_con_tro_ham = function_2;

	//Chuc nang 2: dung de thuc thi ham co dia chi duoc luu trong con tro
	ten_con_tro_ham(1, 2);

	pfunc pf;
	pf = function_3;
	pf();

	float S = tinhTichPhan(4, 12, &fx);

	printf("Tich phan ham fx: %.1f", S);
}