#include<iostream>
using namespace std;
class Demo
{
	int x;
	public:
	Demo()
	{
		i=j=k=x=11;
	}
	public:
	int i;
	private:
	int j;
	protected:
	int k;
};
int main()
{
	Demo obj;
	cout<<obj.i<<endl;
//	cout<<obj.j<<endl;
//	cout<<obj.k<<endl;
//	cout<<obj.x<<endl;
	return 0;
}
