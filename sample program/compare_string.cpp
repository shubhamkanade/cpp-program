#include<iostream>
#include<string>

using namespace std;

int main()
{
	string names[]{"Alex", "Betty","Caroline","Dave","Emily","Fred", "Greg","Holly"};

	string name;
	cin>>name;
	
	/*for(string user : names)
	{
		if(user == name)
		{
			//cout<<name<<" was found"<<endl;
			break;	
		}	
	}*/

	int i = 0;
	for(i = 0;i < sizeof(names) / sizeof(names[0]);i++)
		if(name == names[i])
			break;

	if(i == sizeof(names) / sizeof(names[0]))
		cout<<"was not found"<<endl;
	else
		cout<<"was found"<<endl;
	
			
return 0;
}
