#include<iostream>
using namespace std;
class Demo
{
	public:
		int i,j;
		Demo()
		{
			cout<<"Default constrcutor\n";
		}
		~Demo(Demo obj)
		{
			cout<<"Copy constructor\n";
		}
		~Demo()
		{
			cout<<"Destructor\n";
		}
};
int main()
{
	Demo obj;
	Demo obj1(obj);
	return 0;
}
