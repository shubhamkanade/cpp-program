#include<iostream>
using namespace std;

        template <class T>
T add(int no1,int no2)
{
        return (T)no1+no2;
}
int main()
{
        int no1,a=10,b=20;
        float no2,x=3.1f,y=2.01f;

        no1=add(a,b);
        no2=add(x,y);

        cout<<no1<<endl;
        cout<<no2<<endl;

        return 0;
}

