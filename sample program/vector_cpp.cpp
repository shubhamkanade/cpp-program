#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	
	int n = 0;
	cin >> n;

	for(int i = 0;i < n;i++)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}	
	
	for(int i = 0;i < n;i++)
		cout << v[i] << " ";
	//v.push_back(10);
	//v.push_back(20);
	//v.push_back(30);

	//for(int i : v)
		//cout<<i;
}
