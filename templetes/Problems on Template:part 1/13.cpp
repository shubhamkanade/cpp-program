#include<iostream>
using namespace std;
template<class T,int no=5>
class Demo
{
	public:
		T a[no];
		void Accept()
		{
			cout<<"Please enter values\n";
			for(int i=0;i<5;i++)
				cin>>a[i];
		}
		T Maximum()
		{

			T max=0;

			for(int i=0;i<5;i++)
			{
				if(a[i]>max)
					max=a[i];
			}
			return max;
		}
};
int main()
{
	Demo <int>obj1;
	obj1.Accept();

	cout<<"Naximum is "<<obj1.Maximum();
	cout<<"Size is "<<sizeof(obj1);
	return 0;
}


