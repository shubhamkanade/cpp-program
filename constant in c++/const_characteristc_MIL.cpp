#include<iostream>
using namespace std;
class demo
{
	public:int x,y,z;
	       demo():x(11),y(51),z(101)
	{
		cout<<"inside default constructor"<<endl;
	}
	       demo(int i,int j,int  k):x(i),y(j),z(k)
	{
		cout<<"parameterized consrtuctor"<<endl;
	}
	       demo(int i):y(++i),x(i),z(++i)
	{
		cout<<"inside parameerized"<<endl;
	}
};
int main()
{
	demo obj;
	demo obj1(10,20,30);
	demo obj2(10);

	cout<<obj.x<<"\t"<<obj.y<<"\t"<<obj.z<<"\t";

	cout<<obj1.x<<"\t"<<obj1.y<<"\t"<<obj1.z<<"\t";

	cout<<obj2.x<<"\t"<<obj2.y<<"\t"<<obj2.z<<"\t";

	return 0;
}
