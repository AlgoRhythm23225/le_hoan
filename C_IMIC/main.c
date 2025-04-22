#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//Chuc nang: skip so byte can thiet
//Input: bien FILE
//Output: skip n file
void skip(FILE* bin, int number_of_byte_to_skip)
{
	for (int i = 1; i <= number_of_byte_to_skip; i++)
	{
		fgetc(bin);
	}
}
void main()
{
	FILE* bin = fopen("audio.bin", "r");
	if (!bin)
	{
		printf("Can't open");
		return;
	}
	else printf("Mo file thanh cong\n");

	skip(bin, 4);
	//Doc 4 byte tiep - Dung luong
	unsigned char a5 = fgetc(bin);
	unsigned char a6 = fgetc(bin);
	unsigned char a7 = fgetc(bin);
	unsigned char a8 = fgetc(bin);
	unsigned int size = a5 | (a6 << 8) | (a7 << 16) | (a8 << 24);
	printf("Size of audio.wav = %u bytes\n", size);

	skip(bin, 16);

	//Doc Sample Rate
	unsigned char a25 = fgetc(bin);
	unsigned char a26 = fgetc(bin);
	unsigned char a27 = fgetc(bin);
	unsigned char a28 = fgetc(bin);

	unsigned int sample_rate = a25 | (a26 << 8) | (a27 << 16) | (a28 << 24);
	printf("Sample rate of audio.wav = %u bytes\n", sample_rate);	
}