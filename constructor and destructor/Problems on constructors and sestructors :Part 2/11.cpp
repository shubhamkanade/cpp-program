#include<iostream>
using namespace std;
class Demo
{
	public:
		int i,j;
		Demo()
		{
			cout<<"Default constructor\n";
		}
		~Demo()
		{
			cout<<"Destructor\n";
		}
};
Demo obj1;
void fun()
{
	cout<"Inside fun\n";
	static Demo obj2;
	cout<<"Returning from fun\n";
}
int main()
{
	cout<<"Indie main"<<endl;
	fun();
	Demo obj3;
	cout<<"Rteurning from main\n";
	return 0;
}

