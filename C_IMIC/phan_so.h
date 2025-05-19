#include <stdio.h>
#ifndef PHAN_SO_H
#define PHAN_SO_H

class phan_so
{
public:
	int tu;
	int mau;

	phan_so operator*(phan_so khac);
	phan_so operator/(phan_so khac);
	phan_so operator+(phan_so khac);
	phan_so operator-(phan_so khac);
	phan_so simplify();
	void compare(phan_so khac);



	phan_so(int insert_tu_here, int insert_mau_here)
	{
		tu = insert_tu_here;
		mau = insert_mau_here;
	}
	phan_so()
	{
		tu = 0;
		mau = 1;
	}
};

#endif