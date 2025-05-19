#include "phan_so.h"

int main()
{
	phan_so a(2, 4), b(6, 4);
	phan_so mult, div, add, subt, simpl;
	
	printf("a = %d / %d\n", a.tu, a.mau);
	printf("b = %d / %d\n\n", b.tu, b.mau);
	
	mult = a * b;
	mult = mult.simplify();
	printf("a x b = %d / %d\n", mult.tu, mult.mau);
	
	div = a / b;
	div = div.simplify();
	printf("a %% b = %d / %d\n", div.tu, div.mau);
	
	add = a + b;
	add = add.simplify();
	if (add.mau == 1)
		printf("a + b = %d\n", add.tu);
	else
		printf("a + b = %d / %d\n", add.tu, add.mau);

	subt = a - b;
	subt = subt.simplify();
	if (subt.tu == 0)
		printf("a - b = %d\n", 0);
	else
		printf("a - b = %d / %d\n", subt.tu, subt.mau);

	simpl = a.simplify();
	a.compare(b);
}