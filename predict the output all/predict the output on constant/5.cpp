#include<iostream>
using namespace std;
class Demo
{
	public:
		const int i;
		int j;
		Demo():i(10),j(i)
	{
		cout<<"inside constructor"<<endl;
	}
};
		int main()
		{
			Demo obj;
			cout<<obj.i<<obj.j<<endl;
			return 0;
		}
