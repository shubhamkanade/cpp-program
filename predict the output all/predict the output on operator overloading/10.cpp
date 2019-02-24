#include<iostream>
using namespace std;
class Demo
{
	public:
		void fun(int i)
		{
			cout<"first defianiton";
		}
};
int main()
{
	Demo obj1;
	char ch='a';
	obj1.fun((int)ch);
	obj1.fun((int)10.0f);
		return 0;
}
