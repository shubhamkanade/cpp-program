#include <iostream>
//#define w(t) while(t--)
using namespace std;

int main() {

	int t,n, count = 0, k =0;
	cin>>t;

	while(t--)
	{
		cin>>n;
		int arr[n];
		int brr[n];
		for(int i = 0;i < n;i++)
		{
			cin>>arr[i];
		}
		for(int i = 0;i < n - 1;i++)
		{
			for(int j = i+1;j < n;j++)
			{
				if(arr[i] < arr[j])
				{
					count++;
				}
			} 
			//cout<<count<<"\n";               
			brr[k] = count;
				k++;
			count = 0;
		}
		for(k = 0;k < n ;k++)
		{
			//cout<<"\n";
			cout<<brr[k]<<" ";
		}
		for(k = 0;k < n;k++)
		{
			brr[k] = 0;
		}
		cout<<endl;;
		k = 0;
	}
	return 0;
}















