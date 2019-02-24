#include<iostream>
using namespace std;
class demo
{
public:
int &ref;
demo(int x):ref(x)
{
cout<<"inside default";
}
};
int main()
{
//demo obj;
int no=11;
demo obj1(no);
cout<<obj1.ref<<endl;
cout<<sizeof(obj1);
return 0;
}

