#include<iostream>
using namespace std;
class Demo
{
	public:
		Demo()
		{
			i=j=k=11;
		}
	public:
		int i;
	private:
		int j;
	protected:
		int k;
	public:
		void fun()
		{
			cout<<i<<endl;
			cout<<j<<endl;
			cout<<k<<endl;
		}
};
int main()
{
	Demo obj;
	obj.fun();
	return 0;
}
