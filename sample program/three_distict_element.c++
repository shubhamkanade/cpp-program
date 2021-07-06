#include<iostream>

using namespace std;

void find3largest(int  arr[],int n)
{
	int fm = 0, sm = 0, tm = 0;
	for(int i = 0;i < n;i++)
	{
		if(arr[i] > fm)
		{
		tm = sm;
		sm = fm;
		fm = arr[i];
		}
		else if(arr[i] > sm)
			sm =arr[i];
		else if(arr[i] > tm)
			tm = arr[i];
	}
	cout << fm << " " <<sm << " " << tm <<endl;

}

int main() 
{ 
    int arr[] = { 12, 45, 1, -1, 45, 54, 23, 5, 0, -10 };
    int n = sizeof(arr) / sizeof(arr[0]);
    find3largest(arr, n);
    return 0; 
} 
