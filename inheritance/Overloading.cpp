#include<iostream>
using namespace std;
class A
{

	public:
		void fun(int i){
			cout<<"Inside FUn\n";
			}
};
class B:public A
{
	public:
		void fun(int i,int j){
			cout<<"Inside fun B\n";
			}

};
int main()
{
	B bobj;
	bobj.fun(1);

return 0;
}
