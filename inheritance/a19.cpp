#include<iostream>
using namespace std;
class demo
{
	public:
	
	void fun(void *pr)
	{
	}
	
};
int main()
{
	int no=11;
	char ch='a';

	demo obj;
	obj.fun(&no);
	obj.fun(&ch);
	obj.fun((char*)&no);
	obj.fun((int*)&ch);
	obj.fun((int*)400);
	obj.fun((char*)400);
	return 0;
}
