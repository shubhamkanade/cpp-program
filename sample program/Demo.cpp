#include<iostream>
using namespace std;
class 
{
int i;
public:
void setData(int x)
{
i=x;
}
void printData()
{
cout<<this->i;
}

}dobj;
int main()
{
dobj.setData(10);
dobj.printData();
return 0;
}
