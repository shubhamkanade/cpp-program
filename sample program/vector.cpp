#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main()
{
	vector<int> v;

	int n = 0;
	cin >> n;
	for(int i = 0;i < n;i++)
	{
		int element;
		cin >> element;
		v.push_back(element);	
	}

	sort(v.begin(), v.end());
	for(int i = 0;i < n;i++)
		cout << v[i] << " ";
return 0;
}

