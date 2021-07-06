#include<algorithm>
#include<stdio.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	int brr[]{43,12,67,23,86,36,58,10};

	int size = sizeof(brr) / sizeof(brr[0]);

	sort(brr, brr + size);

	for(int i : brr)
		cout<<i<<endl;
return 0;
}
