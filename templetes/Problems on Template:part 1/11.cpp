#include "Header.h"
template<class T>
class Demo
{
public:
T a[5];
void Accept()
{
cout<<"Please enter the values";
for(int i=0;i<5;i++)
{
cin>>a[i];
}
}
T Maximum()
{
T max=0;
for(int i=0;i<5;i++)
{
if(a[i]>max)
max=a[i];
}
return max;
}
}
