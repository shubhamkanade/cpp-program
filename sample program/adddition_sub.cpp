#include<iostream>
using namespace std;
class arithematic
{
	public:
		int no1,no2,result;
		void addition()
		{
			result=no1+no2;
		}
		void subtraction()
		{
			result=no1-no2;
		}
};
int main()
{
arithematic obj1;
arithematic obj2;
obj1.no1=30;
obj1.no2=40;

obj2.no1=20;
obj2.no2=30;

obj1.addition();
cout<<"the addtion is"<<obj1.result;

obj2.subtraction();
cout<<"the subtraction is"<<obj2.result;
return 0;
}
