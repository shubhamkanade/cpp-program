#include<iostream>
//#include<string>
using namespace std;
int main()
{
int no;
	//cout<<"ENter how many names you want\n";
	//cin>>no;	
	string name[6];
	cout<<"Enter your multiple name:\n";
	for(int i=0;i<5;i++)
	{
	getline(cin,name[i]);
	}
	cout<<"your multiple names are:\n";
        for(int i=0;i<5;i++)
        {
        cout<<name[i]<<endl;
        }

	//cout<<"your name is: "<<name;
	return 0;
}

