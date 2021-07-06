#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	vector<int> v;

	int n = 0;
	cin >> n;

	for(int i = 0; i < n; i++)		
	{
		int a = 0;
		cin >> a;
		v.push_back(a);
	}
	
	for(int i = 0; i < n;i++)
		cout << v[i] << " ";

return 0;
}
