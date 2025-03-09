#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x1, thu_nhap, m1 = 0, m2 = 0, m3 = 0, m4 = 0, chiu_thue = 0,  mien_thue = 0;
	//Cac khoan mien thue
	printf("Xac nhan khoan mien thue (1_co, 0_khong): ");
	scanf("%d", &x1);
	if (x1)
	{
		printf("-- Bo 3 so cuoi trong gia tien --\nPhu cap an trua ( max 730k/month ): ");
		scanf("%d", &m1);
		if (m1 > 730) m2 = 730;
		printf("Tien trang phuc ( max 5tr/month ): ");
		scanf("%d", &m2);
		if (m2 > 5000) m2 = 5000;
		printf("Tien cong tac phi hop li: ");
		scanf("%d", &m3);	
		printf("Mot so khoan phuc loi khac theo quy dinh: ");
		scanf("%d", &m4);
		mien_thue = m1 + m2 + m3 + m4;
	}
	printf("Tong thu nhap: ");
	scanf("%d", &thu_nhap);
	chiu_thue = thu_nhap - mien_thue;
	printf("Thu nhap chiu thue: %d VND\n", chiu_thue*1000);

	//Cac khoan giam tru
	int x2, t1, t2, t3, t4, giam_tru = 0, chiu_thue_2 = 0;
	printf("Xac nhan khoan giam tru (1_co, 0_khong): ");
	scanf("%d", &x2);
	if (x2)
	{
		printf("La nguoi viet nam (1_co, 0_khong): ");
		scanf("%d", &t1);
		printf("So nguoi phu thuoc: ");
		scanf("%d", &t2);
		printf("Bao hiem (1_co, 0_khong): ");
		scanf("%d", &t3);
		printf("Quy huu tri tu nguyen ( max 3tr ): ");
		scanf("%d", &t4);
		if (t4 > 3000) t4 = 3000;
		giam_tru = t1*11000 + t2*4400 + t3*thu_nhap*10.5/100 + t4;
	}
		chiu_thue_2 = chiu_thue - giam_tru;
		if (chiu_thue_2 < 0) chiu_thue_2 = 0;
		printf("Thu nhap chiu thue: %d VND\n", chiu_thue_2*1000);

	//Tinh thue
		int thue;
		if (chiu_thue_2 > 80000) thue = chiu_thue_2 * 0.35 - 9850;
		else if (chiu_thue_2 > 52000) thue = chiu_thue_2 * 0.30 - 5850;
		else if (chiu_thue_2 > 32000) thue = chiu_thue_2 * 0.25 - 3250;
		else if (chiu_thue_2 > 18000) thue = chiu_thue_2 * 0.20 - 1650;
		else if (chiu_thue_2 > 10000) thue = chiu_thue_2 * 0.15 - 750;
		else if (chiu_thue_2 > 5000) thue = chiu_thue_2 * 0.10 - 250;
		else thue = chiu_thue_2 * 0.05;
		printf("Tien thue la: %d VND", thue*1000);
}