#include<iostream>
using namespace std;
class Demo
{
	public:
		int *p;
		Demo()
		{
			cout<<"Default constructor\n";
			p=new int[2];
			p[0]=p[1]=10;
		}
		Demo (Demo &obj){
			cout<<"copy constructor\n";
			p=new int[2];
			for(int i=0;i<2;i++)
				p[i]=obj.p[i];
		}
};
int main()
{
	Demo obj;
	Demo obj1(obj);
	cout<<obj.p[0]<<obj.p[1]<<endl;
	cout<<obj1.p[0]<<obj1.p[1]<<endl;
	obj1.p[0]=obj1.p[1]=21;
	cout<<obj.p[0]<<obj.p[1]<<endl;
	cout<<obj1.p[0]<<obj1.p[1]<<endl;
	return 0;
}

