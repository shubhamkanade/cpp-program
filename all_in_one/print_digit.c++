#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{

long number = 0;

	cin >> number;

	while(number != 0)
	{
		cout << number % 10 << endl;
		number /= 10;
	}
		
return 0;
}
