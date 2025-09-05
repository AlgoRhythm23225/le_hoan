#include "hinh_hoc.h"
#include <iostream>

using namespace std;

void main()
{
	//Class 1 - Start
	hinh_chu_nhat_c A;
	A.dai = 7;
	A.rong = 5;

	cout << "Dien tich hinh A: " << A.tinh_dien_tich() << endl;
	cout << "Chu vi hinh A: " << A.tinh_chu_vi() << endl;
	cout << "Size of class hinh_chu_nhat_c: " << sizeof(hinh_chu_nhat_c) << endl;

	//Class 2 - Array
	hinh_chu_nhat_c B[3];
	B[0].dai = 2;
		//...
}