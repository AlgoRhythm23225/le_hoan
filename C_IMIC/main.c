#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct phan_so
{
	int tu;
	int mau;
};

//Chuc nang: Nhan 2 phan so
//Input:
//Output:
float nhan_2_phan_so(float phan_so_1, float phan_so_2)
{
	float ket_qua = phan_so_1 * phan_so_2;
	return ket_qua;
}

int main()
{
	struct phan_so A;
	struct phan_so B;
	
	A.tu = 1;
	A.mau = 2;

	B.tu = 3;
	B.mau = 4;

	float phan_so_1 = A.tu / A.mau;
	float phan_so_2 = B.tu / B.mau;
	float tich = nhan_2_phan_so(phan_so_1, phan_so_2);

	printf("%.2f", tich);
}