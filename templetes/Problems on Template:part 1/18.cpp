#include"Header.h"
template <class T>
class Base
{

	public:

		void fun(T no)
		{
			cout<<"First fun: "<<no;
		}
		void fun(float no)
		{
			cout<<"Second fun : "<<no;
		}

};

int main()
{
	Base <char>bobj;
	bobj.fun('a');
	return 0;
}
