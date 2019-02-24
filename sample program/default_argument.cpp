#include<iostream>
using namespace std;
float area(float radius,float pi=3.14)
{
	float ans=pi*radius*radius;
	return ans;
}
int main()
{
	float ans=0.0;
	ans=area(4.2,3.15);
	cout<<ans<<endl;
	ans=area(5.7);
	cout<<ans<<endl;
	return 0;
}
