#include<algorithm>
#include<stdio.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
//#include <algorithm>
 // C++ progrma to sort an array
//#include <algorithm>
using namespace std;

int main()
{
	int arr[] = {6,2,4,9,1,5,6,2};
	
	int size = sizeof(arr) / sizeof(arr[0]);
	sort(arr,arr+ size);

	for(int i = 0 ;i < size;i++)
		printf("%d",arr[i]);

}
