#include<iostream>

using namespace std;

int sum(int arr[], int n)
{
	if(arr == NULL)
		return -1;

	int sum = 0;
	for(int i = 0; i < n; i++)
		sum +=  arr[i];

	return sum;		
}	

int main()
{
	int n = 0;

	cin >> n;
	
	int arr[n];

	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	cout<<"Sum from array is " << sum(arr, n) << endl;
	
return 0;
}

