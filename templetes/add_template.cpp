#include<iostream>
using namespace std;
//necked function
	template<class t>
t maximum(t no1,t no2)
{
	if(no1>no2)
		return no1;
	else
		return no2;
}
int main()
{
	int x=10,y=20;
cout<<"\n"<<maximum(x,y);
cout<<"\n"<<maximum(37.00,37.54);
cout<<"\n"<<maximum(10.0f,20.0f);
cout<<"\n"<<maximum('a','x');

}
