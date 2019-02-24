#include<iostream>
#include<stdlib.h>
using namespace std;
class Demo
{
	public:
		int i,j;
		Demo()
		{
			cout<<"Default constructor\n";
		}
		~Demo()
		{
			cout<<"Destructor\n";
		}
};
		int main()
		{
			cout<<"Inside main";
			Demo *p=new Demo[2];
			delete []p;
			Demo *q=(Demo*)malloc(sizeof(Demo));
			free(q);
			return 0;
		}
