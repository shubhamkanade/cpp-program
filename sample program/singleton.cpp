//singleton classes which is used to create only one object of a class
#include<iostream>
using namespace std;
class demo
{
	public:
		static demo obj;
		int i,j;

		static demo & getref()
		{
			return obj;
		}

	private:
		demo()
		{
			cout<<"\ninside constructor";
		}
};
demo demo::obj;
int main()
{
	demo var=demo::getref();
	demo var2=demo::getref();
		//demo obj2;
	return 0;
}
