#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Chuc nang: skip so byte can thiet
//Input: bien FILE
//Output: skip n file
void skip(FILE* bin, int numbers_of_byte_to_skip)
{
	for (int i = 1; i <= numbers_of_byte_to_skip; i++)
	{
		fgetc(bin);
	}
}

void file_size(FILE* bin)
{
	rewind(bin);
	skip(bin,4);
	unsigned char a5 = fgetc(bin);
	unsigned char a6 = fgetc(bin);
	unsigned char a7 = fgetc(bin);
	unsigned char a8 = fgetc(bin);
	unsigned int size = a5 | (a6 << 8) | (a7 << 16) | (a8 << 24);
	printf("Size of audio.wav = %u bytes\n", size);
}

void sample_rate(FILE* bin)
{
	rewind(bin);
	skip(bin, 24);
	unsigned char a25 = fgetc(bin);
	unsigned char a26 = fgetc(bin);
	unsigned char a27 = fgetc(bin);
	unsigned char a28 = fgetc(bin);
	unsigned int hz = a25 | (a26 << 8) | (a27 << 16) | (a28 << 24);
	printf("Sample rate of audio.wav = %u bytes\n", hz);
}

void num_channels(FILE* bin)
{
	rewind(bin);
	skip(bin, 22);
	unsigned char a23 = fgetc(bin);
	unsigned char a24 = fgetc(bin);
	unsigned int num_channel = a23 | (a24 << 8);
	printf("Number of Channels = %u\n", num_channel);
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

	file_size(bin);
	num_channels(bin);
	sample_rate(bin);

	fclose(bin);
}