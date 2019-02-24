#include<iostream>
using namespace std;
class demo
{
public:
int i;
int &ref;
demo(int x):ref(x)
{
i=11;
}
};
int main()
{
int no=11;
demo obj(no);
cout<<obj.ref;
cout<<obj.i;
return 0;
}
