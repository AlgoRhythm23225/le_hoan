#include "phan_so.h"

phan_so_c phan_so_c::operator*(phan_so_c khac)
{
	phan_so_c kq;
	kq.tu = tu * khac.tu;
	kq.mau = mau * khac.mau;
	return kq;
}

phan_so_c phan_so_c::operator/(phan_so_c khac)
{
	phan_so_c kq;
	kq.tu = tu * khac.mau;
	kq.mau = mau * khac.tu;
	return kq;
}

phan_so_c phan_so_c::operator+(phan_so_c khac)
{
	phan_so_c kq;
	kq.tu = tu * khac.mau + khac.tu * mau;
	kq.mau = mau * khac.mau;
	return kq;
}

phan_so_c phan_so_c::operator-(phan_so_c khac)
{
	phan_so_c kq;
	kq.tu = tu * khac.mau - khac.tu * mau;
	kq.mau = mau * khac.mau;
	return kq;
}

phan_so_c phan_so_c::rut_gon(phan_so_c khac)
{
	int mod_temp;
	int tu_temp = tu;
	int mau_temp = mau;
	if (tu_temp > mau_temp)
	{
		do {
			mod_temp = tu_temp % mau_temp;
			tu_temp = mau_temp;
			mau_temp = mod_temp;
		} while (mod_temp != 0);
		// UCLN = tu_temp
		phan_so_c kq;
		kq.tu = tu / tu_temp;
		kq.mau = mau / tu_temp;
		// return
		khac.tu = kq.tu;
		khac.mau = kq.mau;
		if (khac.mau < 0)
		{
			khac.mau *= -1;
			khac.tu *= -1;
		}
		return khac;
	}
	
	if (mau_temp > tu_temp)
	{
		do {
			mod_temp = mau_temp % tu_temp;
			mau_temp = tu_temp;
			tu_temp = mod_temp;
		} while (mod_temp != 0);
		// UCLN = tu_temp
		phan_so_c kq;
		kq.tu = tu / mau_temp;
		kq.mau = mau / mau_temp;
		// return
		khac.tu = kq.tu;
		khac.mau = kq.mau;
		if (khac.mau < 0)
		{
			khac.mau *= -1;
			khac.tu *= -1;
		}
		return khac;
	}
	
}

void phan_so_c::operator==(phan_so_c khac)
{
	phan_so_c temp_1, temp_2;
	temp_1.tu = tu * khac.mau;
	temp_2.tu = khac.tu * mau;
	if (temp_1.tu > temp_2.tu)
		cout << "Lon hon" << endl;
	else if (temp_1.tu == temp_2.tu)
		cout << "Bang" << endl;
	else
		cout << "Nho hon" << endl;
}	

// Ham tao 2 doi so
phan_so_c::phan_so_c(int tu_so, int mau_so)
{
	tu = tu_so;
	mau = mau_so;
	cout << "Ham tao 2 doi so duoc khoi chay" << endl;
}

// Ham tao 0 doi so
phan_so_c::phan_so_c()
{
	tu = 0;
	mau = 0;
	cout << "Ham tao 0 doi so duoc khoi chay" << endl;
}

// Ham huy
