#include <stdio.h>
#include <stdlib.h>

#define PRTTSIZE(type)  \
    printf(#type ": %ld Bytes\n", sizeof(type))

int main()
{
    PRTTSIZE(char);
    PRTTSIZE(unsigned char);
    PRTTSIZE(wchar_t);
    PRTTSIZE(short);
    PRTTSIZE(unsigned short);
    PRTTSIZE(int);
    PRTTSIZE(unsigned int);
    PRTTSIZE(long);
    PRTTSIZE(unsigned long);
    PRTTSIZE(float);
    PRTTSIZE(double);
}
/*
system: ubantu 16.04.1 LTS 
compiler：clang 3.8.0, gcc 5.4.0
stdout:
char: 1 Bytes
unsigned char: 1 Bytes
wchar_t: 4 Bytes
short: 2 Bytes
unsigned short: 2 Bytes
int: 4 Bytes
unsigned int: 4 Bytes
long: 8 Bytes
unsigned long: 8 Bytes
float: 4 Bytes
double: 8 Bytes
*/
