#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#pragma pack(push)
#pragma pack(1)
typedef struct {
	int a;
	char b;
}test_t;
#pragma pack(pop)

typedef struct {
	char e;
	int c;
	char d;
}test2_t;

void main() {
	printf("%d", sizeof(test_t));
	printf("%d", sizeof(test2_t));
}