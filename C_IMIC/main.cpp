#include <stdio.h>
#include "hinh_hoc.h"

void main()
{
	hinh_chu_nhat_c B;
	B.dai = 5;
	B.rong = 3;
	printf("%d\n", B.tinh_dien_tich());
	printf("%d\n", B.tinh_chu_vi());	
}