#include <iostream>
#include <uchar.h>

using std::cout;
using std::endl;

#define PRTTSIZE(type)  \
    #type << ": " << (sizeof(type)) << " Bytes" << endl

int main()
{
    cout << PRTTSIZE(bool)
         << PRTTSIZE(char)
         << PRTTSIZE(wchar_t)
         << PRTTSIZE(char16_t)
         << PRTTSIZE(char32_t)
         << PRTTSIZE(short)
         << PRTTSIZE(int)
         << PRTTSIZE(long)
         << PRTTSIZE(long long)
         << PRTTSIZE(float)
         << PRTTSIZE(double)
         << PRTTSIZE(long double);
}
/*
system: ubantu 16.04.1 LTS 
compiler：clang 3.8.0, gcc 5.4.0
stdout:
bool: 1 Bytes
char: 1 Bytes
wchar_t: 4 Bytes
char16_t: 2 Bytes
char32_t: 4 Bytes
short: 2 Bytes
int: 4 Bytes
long: 8 Bytes
long long: 8 Bytes
float: 4 Bytes
double: 8 Bytes
long double: 16 Bytes

sytem: Windows 7 SP1
compiler: Visual Studio 2015
          用于 x86 的 Microsoft (R) C/C++ 优化编译器 19.00.23026 版
stdout:
bool: 1 Bytes
char: 1 Bytes
wchar_t: 2 Bytes
char16_t: 2 Bytes
char32_t: 4 Bytes
short: 2 Bytes
int: 4 Bytes
long: 4 Bytes
long long: 8 Bytes
float: 4 Bytes
double: 8 Bytes
long double: 8 Bytes
*/
