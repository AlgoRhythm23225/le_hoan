#include "phan_so.h"


phan_so phan_so::operator*(phan_so khac)
{
	phan_so kq;
	kq.tu = tu * khac.tu;
	kq.mau = mau * khac.mau;
	return kq;
}

phan_so phan_so::operator/(phan_so khac)
{
	phan_so kq;
	kq.tu = tu * khac.mau;
	kq.mau = mau * khac.tu;
	return kq;
}

phan_so phan_so::operator+(phan_so khac)
{
	phan_so kq;
	kq.tu = tu * khac.mau + mau * khac.tu;
	kq.mau = mau * khac.mau;
	return kq;
}

phan_so phan_so::operator-(phan_so khac)
{
	phan_so kq;
	kq.tu = tu * khac.mau - mau * khac.tu;
	kq.mau = mau * khac.mau;
	return kq;
}

phan_so phan_so::simplify()
{
	phan_so kq;
	int divisor, dividend;
	int r;
	if (tu == 0)
	{
		kq.tu = 0;
		kq.mau = 1;
		return kq;
	}


	// Tinh so du
	if (tu > mau)
	{
		divisor = tu;
		dividend = mau;
		r = tu % mau;
	}
	else
	{
		divisor = mau;
		dividend = tu;
		r = mau % tu;
	}

	
	// Ap dung dinh li Oclit
	while (r != 0)
	{
		divisor = dividend;
		dividend = r;
		r = divisor % dividend;
	}

	// GCD = Greatest Common Divisor
	int GCD = dividend;

	kq.tu = tu / GCD;
	kq.mau = mau / GCD;

	return kq;
}

void phan_so::compare(phan_so khac)
{
	if (tu * khac.mau > mau * khac.tu)
		printf("a > b");
	else if (tu * khac.mau < mau * khac.tu)
		printf("a < b");
	else
		printf("a = b");
}