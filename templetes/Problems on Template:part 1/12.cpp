#include"Header.h"
template<class T>
class Demo
{
public:
	T a[5];
	void Accept()
	{
		cout<<"Please enter the values\n";
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

cout<<"Naximum is "<<obj2.Maximum();
cout<<"Size is "<<sizeof(obj1);
return 0;
}
