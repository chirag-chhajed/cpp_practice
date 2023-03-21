#include <iostream>
#include <cstdint>

using namespace std;

int main()
{
    // 1byte is of 8 bits
    // printf("Size of this data type is %ld bits\n", sizeof(int16_t) * 8);
    // printf("Size of this data type is %ld bits\n", sizeof(uint16_t) * 8);
    // printf("Size of this data type is %ld bits\n", sizeof(char16_t) * 8);
    // printf("Size of this data type is %ld bits\n", sizeof(short int) * 8);
    // printf("Size of this data type is %ld bits\n", sizeof(long int) * 8);
    // printf("Size of this data type is %ld bits\n", sizeof(long) * 8);
    // printf("Size of this data type is %ld bits\n", sizeof(long long int) * 8);

    // converting hexadecimal to decimal
    int hexa = 0x16;
    printf("hexa value is %d\n", hexa);
    // converting binary to decimal
    int fun = 0b00010110;
    printf("Fun Value is %d\n", fun);
    return 0;
}