#include<iostream>
using namespace std;
class demo
{
	public:
		int i,j;
		demo()
		{
			this->i=10;
			(*this).j=20;
		}
		~demo()
		{
			cout<<this->i;
		}
		void gun()
		{
			cout<<this->i;
		}
		void fun()
		{
			this->gun();
		}
};
int main()
{
demo obj1;
return 0;
}

