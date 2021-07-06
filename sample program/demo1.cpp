#include<iostream>
using namespace std;

class Demo
{
public:
	int a=0;
	int b=0;

public:
	void Display()
	{
		a=a+10;
		cout<<a;
	}
	void Display2()
	{
		a=a+10;
		cout<<a;
	}
};

int main()
{
Demo dobj;
dobj.Display();
dobj.Display2();

}
