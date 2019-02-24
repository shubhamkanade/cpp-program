#include<iostream>
using namespace std;
class demo
{
	public:
		int i,j;
		demo()
		{
			cout<<"\ninside defaut";
		}
		demo(int no)
		{
			cout<<"\ninsdie parameterized";
		}

		demo(demo&)
		{
			cout<<"\ninside copy";
		}

		~demo()
		{
			cout<<"\ninside des";
		}
}dobj,dobj1(11),dobj2(dobj1);
/*demo::demo()
  {
  i=j=0;
  cout<<"insdie defalut";
  }
  demo::demo(int no)
  {
  i=j=no;
  cout<<"insdie parameterized";
  }
  demo::demo(demo& ref)
  {
  i=ref.i;
  j=ref.j;
  cout<<"inside copy";
  }*/
int main()
{
	return 0;
}
