//this demeonstrates the concept in which we can delete the memory of caller object from member function by using this pointer

#include<iostream>
using namespace std;

class Base
{
	public :

		int i;
		int j;

		void run() //void run(Base *const this)
		{
			cout<<"Delete the memory of caller object\n";
			delete(this);
		}
};

int main()
{
	Base *bp=new Base();

	bp->run();
	//run(&bp)
	return 0;
}
