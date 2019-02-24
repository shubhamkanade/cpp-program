#include<iostream>
using namespace std;
class Demo
{
	public:
		Demo()
		{
			cout<<"default\n";
		}
		~Demo()
		{
			cout<<"Destructor\n";
		}
};
Demo obj;
int main()
{
	cout<<"inside main\n";
}

