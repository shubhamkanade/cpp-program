#include<iostream>
#define MAX 500
using namespace std;

int mult(int,int*,int);

void factorial(int n)
{
	int res[MAX];

	res[0] = 1;
	int size = 1;

	for(int i = 2;i <= n;i++)
		size = mult(i, res, size);	

	for(int i = size - 1; i >= 0;i--)
		cout << res[i];
}

int mult(int i, int res[], int size)
{
	int carry = 0;

	for(int k = 0;k < size;k++)
	{
		int prod = res[k] * i + carry;

		res[k] = prod % 10;
		
		carry = prod / 10;
						
	}

	while(carry)
	{
		res[size] = carry % 10;
		carry = carry / 10;
		size++;
	}
	return size;
}
int main()
{
	factorial(5);
return 0;
}
