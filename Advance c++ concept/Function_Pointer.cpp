#include<iostream>
using namespace std;

class Demo
{

	public:

		void Run(int);
		void Gun(int);
};

void Demo::Run(int x)
{
	cout<<"Inside Run\n";
}
void Demo:: Gun(int y)
{
	cout<<"Inside Gun\n";
}


int main() /////Entry Point Function
{
	void (Demo::*fp)(int);  //Declaration of function pointer
	 void (Demo::*fp1)(int);
	
	Demo dobj;
	fp=&Demo::Gun;
	 fp1=&Demo::Run;

	(dobj.*fp)(10);
	(dobj.*fp1)(10);

	return 0;
}


