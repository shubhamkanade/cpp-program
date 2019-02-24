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
		Demo(int no)
		{
			cout<<"paramerized\n";
		}
		~Demo()
		{
			cout<<"destructor\n";
		}
}obj1(10);
int main()
{
	cout<<"inside main"<<endl;
	Demo obj2;
	return 0;
}
