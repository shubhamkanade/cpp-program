#include<iostream>
using namespace std;
class Demo
{
	public:
		int i,j;
		Demo()
		{
			cout<<"Default\n";
		}
		~Demo()
		{
			cout<<"Destructor\n";
		}
};
int main()
{
	Demo obj1;
	Demo *p=new Demo();
	return 0;
}
