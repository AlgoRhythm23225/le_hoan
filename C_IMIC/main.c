#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	char a[12];
	printf("Nhap so nguyen tu 6 chu so tro xuong ( khong nhap so co so 0 do chuong trinh chua hoan thien :< ): ");
	scanf("%d", &n);

	//dem ky tu
	sprintf(a, "%d", n);
	int count = strlen(a);
	for (int i = 0; i < count; i++)
	{
		switch (a[i])
		{
			case '1':
				printf("mot");
				break;
			case '2':
				printf("hai");
				break;
			case '3':
				printf("ba");
				break;
			case '4':
				printf("bon");
				break;
			case '5':
				printf("nam");
				break;
			case '6':
				printf("sau");
				break;
			case '7':
				printf("bay");
				break;
			case '8':
				printf("tam");
				break;
			case '9':
				printf("chin");
				break;
		}
		if (i != count - 1) printf(" ");
	

		switch (count - i)
		{
			case 7:
				printf("trieu ");
				break;
			case 6:
				printf("tram ");
				break;
			case 5:
				printf("muoi ");
				break;
			case 4:
				printf("nghin ");
				break;
			case 3:
				printf("tram ");
				break;
			case 2:
				if (a[i] == '0') 
					printf("linh ");
				else 
					printf("muoi ");
				break;
			case 1:
				switch (a[i])
				{
					case 1:	
						printf("mot");
						break;
					case 2:	
						printf("hai");
						break;
					case 3:	
						printf("ba");
						break;
					case 4:	
						printf("bon");
						break;
					case 5:	
						printf("nam");
						break;
					case 6:	
						printf("sau");
						break;
					case 7:	
						printf("bay");
						break;
					case 8:	
						printf("tam");
						break;
					case 9:	
						printf("chin");
						break;
				}
				break;
		}
	}
	
}