#include<iostream>
using namespace std;
class Demo
{
	public:
		void fun(int i=10){
			cout<<"fist deffination";
		}
		void fun(int j)
		{
			cout<<"econd definaiton";
		}
		void fun()
		{
			cout<<"third definaiton";
		}
};
int main()
{
	Demo obj;
	int i=10;
	obj.fun(i);
	return 0;
}
