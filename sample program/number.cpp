#include<iostream>
using namespace std;
class number
{
	public:
		int n;
		void accept()
		{
			cout<<"enter no:";
			cin>>n;
		}
		void operator +()
		{
			++n;
		}
		void operator +(int i)
		{
			n++;
		}
		void display()
		{
			cout<<n;
		}
};
int main()
{
	number n;
	n.accept();
	+n;
	n.display();
	number n1;
	n1.accept();
	n1+(2);
	n1.display();
	return 0;
}
