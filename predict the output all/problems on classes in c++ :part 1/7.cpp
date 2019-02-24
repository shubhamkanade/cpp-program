#include<iostream>
using namespace std;
class Demo
{
	public:
		void fun()
		{
			cout<<"inside fun"<<endl;
		}
	private:
		void gun()
		{
			cout<<"inside gun"<<endl;
		}
	protected:
		void sun()
		{
			cout<<"inside sun"<<endl;
		}
};
int main()
{
	Demo obj;
	obj.fun();
	//obj.gun();
	///obj.sun();
	return 0;
}
