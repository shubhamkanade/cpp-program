#include<iostream>
using namespace std;
class Demo
{
	public:
		int i;
		int j;
		Demo()
		{
			cout<<"Constructor";
		}
};
int main()
{
	const Demo obj;
	obj.i=10; ///Error:Asssignmnet of Demo::i in read only object 
	obj.j=20;  ///Error:Assignment of Demo::j in read only object
	cout<<obj.i<<"\t"<<obj.j<<endl;
	return 0;
}
