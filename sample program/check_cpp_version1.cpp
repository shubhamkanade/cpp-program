#include<iostream>
int main()
{
#if __cplusplus >= 201103L || (defined(_MSC_VER) && _MSC_VER >= 1900)
    std::cout << "C++11 is supported";
#else
    std::cout << "C++11 is not supported";
#endif

}
