#include<iostream>
using namespace std;

class Demo
{

	public:

		const int i=10;
		int j=20;

		void fun() const;
};
void Demo::fun() const
{

}
int main()
{
	Demo obj;
	return 0;
}
