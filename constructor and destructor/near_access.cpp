#include<iostream>
using namespace std;

class Demo
{
	public:
		int i,j;

		Demo()
		{
			i=11;
			this->j=21;
		}
		Demo(int i,int j)
		{
			this->i=i;
			this->j=j;
		}
		void fun(int x,int y)
		{
			cout<<"in fun"<<endl;
			cout<<x<<endl; //60
			cout<<i<<endl; //30
			cout<<this->i; //30
		}
		void gun(int x,int y)
		{
			cout<<"in gun"<<endl;
			cout<<i<<endl; //30
			cout<<this->j<<endl; //40
		}
};
int main()
{
	Demo dobj1();
	Demo dobj2(30,40);

	dobj2.fun(60,70); //after compilation fun(&dobj2,60,70);
	dobj2.gun(100,200);
	//dobj1.fun(70,80);
	return 0;
}//destructor gets called implicitely


