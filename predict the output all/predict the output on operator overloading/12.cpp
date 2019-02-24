#include<iostream>
using namespace std;
class Demo
{
	public:
		void fun(int i,float f)
		{
			cout<"first defination";
		}
		void fun(float f,int i)
		{
			cout<<"secodn definaio";
		}
};
int main()
{
	Demo obj;
	obj.fun(10,10.2f);
	obj.fun(10.2f,10);
	return 0;
}

