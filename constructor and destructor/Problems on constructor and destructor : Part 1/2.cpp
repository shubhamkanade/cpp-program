#include<iostream>
using namespace std;
class Demo
{
	Demo()
	{
		cout<<"constructor\n";
	}
	~Demo()
	{
		cout<<"Destructor\n";
	}
};
int main()
{
	Demo obj;
	return 0;
}
