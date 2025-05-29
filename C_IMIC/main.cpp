#include <stdio.h>

void print_result(int value) {
    int high = (value >> 8) & 0xFF; 
    int low = value & 0xFF;        

    printf("High byte: %d (0x%02X)\n", high, high);
    printf("Low byte: %d (0x%02X)\n", low, low);
}

void main() {
    int num = 4325;
    print_result(num);
}
