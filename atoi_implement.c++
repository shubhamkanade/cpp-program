#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	
	int x = 0, ans = 0;

	//cout << sizeof(s) << endl;
	for(int i = 0; i < s.length(); i++)
	{
		x = s[i] - '0';
		ans = ans * 10 + x;	
	}
	
	cout << ans;
return 0;
}

