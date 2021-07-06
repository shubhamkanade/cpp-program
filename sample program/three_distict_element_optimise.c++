#include <bits/stdc++.h>
using namespace std;

void find3largest(int arr[], int n)
{
	int count = 1, check = 0;

	sort(arr, arr + n);
	for(int i = 1;i < n;i++)
	{
		if(count < 4)
		{
			if(check != arr[n - i])
			{
				cout << arr[n - i] << " ";
				check = arr[n - i];
				count++;
			}
		}
		else
			break;
	}
}

int main()
{
    int arr[] = { 10,4,3,50,23,90 };
    int n = sizeof(arr) / sizeof(arr[0]);
    find3largest(arr, n);

    return 0;
}
