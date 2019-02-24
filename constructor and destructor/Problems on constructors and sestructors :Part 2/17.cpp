#include<iostream>
using namespace std;
class Demo
{
	public:
		int &ref;
		Demo(int i)
		{
			cout<<"Default constructor\n";
			ref=i;
		}
		~Demo()
		{
			cout<<"Destructor\n";
		}
};
int main()
{
	cout<<"Inside main"<<endl;
	int x=10;
	Demo obj(x);
	return 0;
}
