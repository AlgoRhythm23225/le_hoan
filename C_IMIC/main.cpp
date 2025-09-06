#include "phan_so.h"

void main()
{
	phan_so_c A, B, C, D, E, F, G(2,1);
	A.tu = 5;
	A.mau = 14;

	B.tu = 6;
	B.mau = 7;

	C = A * B; 
	C = C.rut_gon(C);

	D = A / B;
	D = D.rut_gon(D);

	E = A + B;
	E = E.rut_gon(E);

	F = A - B; 
	F = F.rut_gon(F);

	/*cout << "Phan so A: " << A.tu<<"/" << A.mau << endl;
	cout << "Phan so B: " << B.tu<<"/" << B.mau << endl;
	cout << "Phan so C = A x B: " << C.tu<<"/" << C.mau << endl;
	cout << "Phan so D = A / B: " << D.tu<<"/" << D.mau << endl;
	cout << "Phan so E = A + B: " << E.tu<<"/" << E.mau << endl;
	cout << "Phan so F = A - B: " << F.tu<<"/" << F.mau << endl;*/
	
	
}