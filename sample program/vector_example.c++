#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> g1;

	for(int i = 4; i <= 22; i++)
		g1.push_back(i);
	
	for(int i = g1.begin(); i != g1.end(); i++)
               	cout<< *i;


return 0;
}
