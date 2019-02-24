#include<iostream>
using namespace std;

void gun();

class demo
{
	private:int x;
	public:int y;
	protected:int z;
friend void gun();
};
void gun()
{
	demo obj;
	cout<<obj.x;
	cout<<obj.y;
	cout<<obj.z;
}
int main()
{
demo obj1;
return 0;
}

