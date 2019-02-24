#include<iostream>
using namespace std;
class demo
{
	public:
		int i,j;
		demo()
		{
			i=10;
			j=20;
}
			 void fun() const
			{
				i++;
				j++;
			}
			void gun()
			{
				i++;
				j++;
			}
		
};
int main()
{
demo obj1;
obj1.fun();
obj1.gun();
return 0;
}
