#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

typedef struct
{
	int tu;
	int mau;
}phan_so_t;

//Chuc nang: nhan 2 phan so
//Input: 2 phan so
//	phan_so_t x
//	phan_so_t y
//Output: tich 2 phan so 
//	phan_so_t kq 
phan_so_t nhan(phan_so_t x, phan_so_t y)
{
	phan_so_t kq;
	kq.tu = x.tu * y.tu;
	kq.mau = x.mau * y.mau;
	return kq;
}

//Chuc nang: chia 2 phan so
//Input: 2 phan so
//	phan_so_t x
//	phan_so_t y
//Output: thuong 2 phan so 
//	phan_so_t kq 
phan_so_t chia(phan_so_t x, phan_so_t y)
{
	phan_so_t kq;
	kq.tu = x.tu * y.mau;
	kq.mau = x.mau * y.tu;
	return kq;
}

//Chuc nang: cong 2 phan so
//Input: 2 phan so
//	phan_so_t x
//	phan_so_t y
//Output: tong 2 phan so 
//	phan_so_t kq 
phan_so_t cong(phan_so_t x, phan_so_t y)
{
	phan_so_t kq;
		kq.tu = x.tu * y.mau + y.tu * x.mau;
		kq.mau = x.mau * y.mau;	
		return kq;
}

//Chuc nang: Tru 2 phan so
//Input: 2 phan so
//	phan_so_t x
//	phan_so_t y
//Output: Hieu 2 phan so 
//	phan_so_t kq 
phan_so_t tru(phan_so_t x, phan_so_t y)
{
	phan_so_t kq;
	kq.tu = x.tu * y.mau - y.tu * x.mau;
	kq.mau = x.mau * y.mau;
	return kq;
}

//Chuc nang: Rut gon
//Input: 2 phan so
//	phan_so_t x
//	phan_so_t y
//Output: Phan so da duoc rut gon 
//	phan_so_t kq 
phan_so_t rut_gon(phan_so_t x)
{
	phan_so_t kq;
	int min = 0;

	kq.tu = x.tu;
	kq.mau = x.mau;

	if (abs(x.tu) > abs(x.mau))
		min = abs(x.mau);
	else min = abs(x.tu);
	
	for (int i = 2; i <= min; i++)
	{
		while (kq.tu % i == 0 && kq.mau % i == 0)
		{
			kq.tu /= i;
			kq.mau /= i;
		}
	}
	return kq;
}

int main()
{
	phan_so_t a = { 12,16 };
	phan_so_t b = { 34,26 };

	printf("Phan so a: %d/%d\n", a.tu, a.mau);
	printf("Phan so b: %d/%d\n", b.tu, b.mau);

	phan_so_t kq = nhan(a, b);
	kq = rut_gon(kq);
	printf("Nhan: %d/%d\n", kq.tu, kq.mau);

	kq = chia(a, b);
	kq = rut_gon(kq);
	printf("Chia: %d/%d\n", kq.tu, kq.mau);

	kq = cong(a, b);
	kq = rut_gon(kq);
	printf("Cong: %d/%d\n", kq.tu, kq.mau);

	kq = tru(a, b);
	kq = rut_gon(kq);
	printf("Tru: %d/%d\n", kq.tu, kq.mau);

	kq = rut_gon(a);
	printf("Rut gon a: %d/%d\n", kq.tu, kq.mau);
	
	kq = rut_gon(b);
	printf("Rut gon b: %d/%d\n", kq.tu, kq.mau);
}