#include<iostream>
using namespace std;
class demo
{
public:
void fun()
{}
inline void fun()
{}
};
int main()
{
demo obj;
obj.fun();
return 0;
}

