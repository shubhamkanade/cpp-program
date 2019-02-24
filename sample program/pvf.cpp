#include<iostream>
using namespace std;
class Base
{
	public:
		int x,y;
		void fun()
		{
			cout<<"inside fun\n";
		}
		virtual void gun()=0;
};
class Derived:public Base
{
	public :
		int i,j;
		void sun()
		{
			cout<<"inside sun\n";
		}
void gun()
{
cout<<"inside gun\n";
}
};
int main()
{
Derived dobj;
//Base obj;
Base *bp;

dobj.gun();
dobj.fun();
cout<<sizeof(dobj);
cout<<"\t" <<sizeof(bp);



}























