#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n = 0;
	cin>>n;
	
	vector<int> v;
	
	for(int i = 0;i < n;i++)
	{
		int a = 0;
		cin>>a;
		v.push_back(a);
	}
	
	for(int i = 0;i < n;i++)
		cout<<v[i]<<" ";

return 0;
}
