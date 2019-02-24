#include<iostream>
using namespace std;
class demo
{
public:
const int i;
const int j;
demo():i(11),j(21) //member initialization list
{
cout<<"inside defaut";
}
demo(int x,int y):i(x),j(y)
{
cout<<"inside parameterized";
}
};
int main()
{
demo obj1;
demo obj2(51,101);
cout<<obj1.i<<obj1.j;
cout<<obj2.i<<obj2.j;

//obj1.i++;
//obj1.i=151;
return 0;
}
