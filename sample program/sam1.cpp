#include <iostream>
#include <string>
using namespace std;

void printS(string s)
{
	for(int i = 0;i < s.length();i++)
		cout<<s[i];
}
int main()
{
	string s = "shubhams";

	int count = 0;
	for(int i = 0;i < s.size();i++)
	{
		if(s[i] == 's')
			count++;
	}
	cout<<count;
	printS(s);
return 0;
}
