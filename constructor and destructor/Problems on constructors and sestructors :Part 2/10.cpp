#include<iostream>
using namespace std;
class Demo
{
	public:
		int i,j;
		Demo()
		{
			cout<<"Default constructor\n";
			class Hello
			{
				public:
					Hello()
					{
						cout<<"Hello const\n";
					}
					~Hello()
					{
						cout<"Helllo dest\n";
					}
			}hobj;
		}
		~Demo()
		{
			cout<<"destructor\n";
		}
};
int main()
{
	Demo obj1;
	return 0;
}
