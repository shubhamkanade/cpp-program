#include<iostream>
using namespace std;
class Demo
{
	public:
		static void fun(int i){
			cout<<"first defiantion";
		}
		void fun(int i)
		{
			cout<<"secodn defiantion";
		}
};
int main()
{
	Demo obj1;
	//obj1.fun(10);
	Demo::fun(10);
	return 0;
}
