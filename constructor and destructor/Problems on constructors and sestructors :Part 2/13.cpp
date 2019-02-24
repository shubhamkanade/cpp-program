#include<iostream>
using namespace std;
class Demo
{
	public:
		int i,j;
		Demo()
		{
			cout<<"Inside Default constructor\n";
			Demo(10);
		}
		Demo(int i)
		{
			cout<<"Inside Parameterized constructor\n";
		}
		~Demo()
		{
			cout<<"Inside Destructor\n";
		}
};
int main()
{
	cout<<"Inside Main\n";
	Demo obbj;
	return 0;
}
