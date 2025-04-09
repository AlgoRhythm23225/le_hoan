#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef union
{
	unsigned short x;
	struct {
		unsigned char y_low;
		unsigned char y_high;
	};
}union_t;

int main() 
{
	union_t A;
	unsigned short val = 0x1234;
	unsigned char low;
	unsigned char high;

	A.x = val;
	low = A.y_low;
	high = A.y_high;
	
	printf("Value = 0x%X\n", val);
	printf("Low = 0x%X\n", low);
	printf("High = 0x%X\n", high);

}