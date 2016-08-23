#include<iostream>

int main()
{
    std::cout << "/*";
    std::cout << "*/";
    //std::cout << /* "*/" */; error missing '"' character
    std::cout << /* "*/" /* "/*" */;
    return 0;
}
