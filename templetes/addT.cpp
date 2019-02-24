#include<iostream>
using namespace std;

	template <class T>
T Addition(T *arr,int iSize)
{
	int i=0;
	T iSum=0;
	if(arr==NULL)
		return ((T)-1);
	for(i=0;i<iSize;i++)
	{
		iSum=iSum+arr[i];
	}
	return iSum;
}
int main()
{
	int arr[]={10,20,30,40,50};

	float brr[]={10.0,3.7,9.8,8.7};
	int iSum=Addition(arr,5);
	cout<<iSum<<"\t"<<endl;
	float fSum=Addition(brr,5);
	cout<<fSum<<"\t"<<endl;

	return 0;
}


