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
		Demo(int i)
		{
			cout<<"Paramerized\n";
		}
		~Demo()
		{
			cout<<"Destructor\n";
		}
}obj1[]={10,20,30,40};
int main()
{
	cout<<"inside main"<<endl;
	return 0;
}
