#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct
{
	int tu;
	int mau;
}phan_so;

//Chuc nang: Nhan 2 phan so
//Input:
//Output:
phan_so NhanPhanSo(phan_so x, phan_so y)
{
	phan_so kq;
	kq.tu = x.tu * y.tu;
	kq.mau = x.mau * y.mau;
	return kq;
}

int main()
{
	phan_so A = { 1,2 };
	phan_so B = { 3,4 };
	
	phan_so C = NhanPhanSo(A, B);
	printf("Ket qua:%d/%d \n", C.tu, C.mau);
}