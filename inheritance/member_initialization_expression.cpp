// we can alse write expressin in case of member initialization list
#include<iostream>
using namespace std;
class demo
{
	public:
		int i,j,k;
		demo(int x):j(++x),i(++x),k(x)
	{
	}
};

int main()
{
	demo obj(10);
	cout<<obj.i<<obj.j<<obj.k<<endl;
	return 0;
}

