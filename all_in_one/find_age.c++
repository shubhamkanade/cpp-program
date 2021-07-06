#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	int age = 0;
	
	cin >> age;
	
	if(age < 18)
		cout<<"Children"<<endl;
	else if(age >= 18 && age <= 40)
		cout<<"Adult"<<endl;
	else
		cout<<"Older"<<endl;

return 0;
}
