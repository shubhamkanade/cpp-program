#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	int n;
	int arr[n];

	cin>>n;
	
	for(int i = 0;i < n;i++)
	{
		cin>>arr[i];
	}

	//for(int element : arr)
	//	cout<<element;

	for(int i = 0;i < n;i++)
	{
		cout<<arr[i];
	}

return 0;
}
