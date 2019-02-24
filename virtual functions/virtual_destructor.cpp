#include<iostream>
using namespace std;
class base1
{
	public:
		base1()
		{
			cout<<"inside base1 constructor\n";
		}
	virtual ~base1()=0;
			//cout<<"inside base1 destructor\n";
		//}
};
class derived1:public base1
{
	public:

};
int main()
{
//	base1 boboj;

//	delete bdobj;
	return 0;
}
