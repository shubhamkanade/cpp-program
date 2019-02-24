#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream ob1("stud.dat");
	ifstream ob2("stud.dat");

	char str[30];

	ob1<<"saurabh is my brother"<<endl<<"India is my country"<<endl;

	while(ob2)
	{
		ob2.getline(str,sizeof(str));
		cout<<str;
	}
	return 0;
}
