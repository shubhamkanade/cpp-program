#include<iostream>
using namespace std;
class Demo
{
	public:
		int i,j;
		Demo()
		{
			cout<<"Dafault\n";
		}
		Demo(int no):i(++no),j(++no)
	{
		cout<<"Paramerized1 ";
	}
		~Demo()
		{
			cout<<"Destructor\n";
		}
};
int main()
{
	Demo obj(10);
	cout<<obj.i<<obj.j<<endl;
	return 0;
}
