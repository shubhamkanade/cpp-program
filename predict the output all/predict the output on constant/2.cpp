#include<iostream>
using namespace std;
class Demo
{
public:
const int i;
Demo()
{
i=10;
}
};
int main()
{
Demo dobj;
cout<<dobj.i;
return 0;
}
