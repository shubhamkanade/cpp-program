#include<iostream>
using namespace std;
template <class T>
T Add(T no1=20, T no2=10)
{
        return no1+no2;
}
int main()
{
        int ans,i=10,j=20;
        ans=Add(i,j);
        cout<<ans<<endl;
	ans=Add(i);
	cout<<ans<<endl;
        return 0;
}
                  
