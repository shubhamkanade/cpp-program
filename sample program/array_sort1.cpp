#include <algorithm>
#include <iostream>
 
using namespace std;

int main()
{
	int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };	

	int size = sizeof(a) / sizeof(a[0]);

	//sort(a, a +size);

	//for(int i = 0;i < size;i++)
		//cout<<a[i];

	for(int element:a)
		cout<<element;

return 0;
}
