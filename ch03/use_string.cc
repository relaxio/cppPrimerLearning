#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1;
    string s2(s1);
    string s2 = s1;  // s2(s1)
    string s3("value");
    string s3 = "value";
    return 0;
}
