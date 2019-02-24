#include<iostream>
using namespace std;
class hello
{
	public:
		void gun();
		void sun();
};

class atoi
{
	public:
		int x;
	private:
		int y;
	protected:
		int z;

		friend class hello;
};

void hello::gun()
{
	atoi at;
	cout<<at.x<<endl;
	cout<<at.y<<endl;
	cout<<at.z<<endl;
}

void hello::sun()
{
	atoi at1;
	cout<<at1.x<<endl;
	cout<<at1.y<<endl;
	cout<<at1.z<<endl;
}
int main()
{
atoi t;
cout<<t.y;
}
