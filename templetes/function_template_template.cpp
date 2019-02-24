#include<iostream>
using namespace std;
template<class t>  ///template header where t is the template argument
t add(t no1,t no2) 
{
t ans=0;
ans=no1+no2;
return ans;
}
int main()
{
cout<<add(10,20)<<endl;
cout<<add(10.00f,20.00f)<<endl;
cout<<add(11.00,20.00)<<endl;
cout<<add((int)'a',(int)'b');
return 0;
}
