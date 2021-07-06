#include<stdio.h>
#define N 3
#include<iostream>
using namespace std;

int subMax(int a[][N])
{
	int i = 0, max_trace = 0;
	for(i = 0; i < N;i++)
	{
		for(int j = 0;j < N;j++)
		{
			int r = i,c = j, trace  = 0;

			while(r < N && c < N)
			{
				trace += a[r][c];
				r++;
				c++;
			
				max_trace = max(trace, max_trace);	
			}
		}
	}
	return max_trace;
}
int main()
{
	int a[N][N] = {{1,2,5},
			{6,3,4},
			{2,7,1}};
	cout<<subMax(a);
return 0;
}
