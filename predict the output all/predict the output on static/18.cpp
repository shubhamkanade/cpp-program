#include<iostream>
using namespace std;
class a
{
	int x;
	static int cnt;
	public:
	a()
	{
		x=++cnt;
	}
	void putData()
	{
		cout<<"\n\t\tx="<<x;
	}
	static void showCnt(void)
	{
		cout<<"cnt is"<<cnt;
	}
};
int a::cnt;
int main()
{
	a::showCnt();
	a a1;
	a::showCnt();
	a1.putData();
	a a2;
	a::showCnt();
	a2.putData();
	a a3;
	a::showCnt();
	a3.putData();
	
	return 0;
}
