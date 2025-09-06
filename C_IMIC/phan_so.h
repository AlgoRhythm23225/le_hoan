#ifndef PHAN_SO_H
#define PHAN_SO_H

#include <iostream>

using namespace std;

class phan_so_c
{
public:
	// dac diem
	int tu;
	int mau;
	// hanh vi
	phan_so_c operator*(phan_so_c khac);
	phan_so_c operator/(phan_so_c khac);
	phan_so_c operator+(phan_so_c khac);
	phan_so_c operator-(phan_so_c khac);
	phan_so_c rut_gon(phan_so_c khac);
	void operator==(phan_so_c khac);
	phan_so_c(int tu_so, int mau_so);	
	phan_so_c();
	~phan_so_c()
	{
		cout << "Doi tuong bi giai phong vung nho" << endl;
	}
};

#endif