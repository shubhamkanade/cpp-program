#include<iostream>
using namespace std;

class Leader
{
	public:
		int *arr;
		int iSize;
	public:
		Leader(int iSize=7)
		{
			arr=new int[iSize];
			this->iSize=iSize;
		}
		void DisplayLeader();
		inline void Accept();
		inline void Display();
};
void Leader::DisplayLeader()
{
int iMax=0;
cout<<"Leader elements are\n";
for(int i=iSize-1;i>=0;i--)
{
	if(arr[i]>iMax)
	{
		iMax=arr[i];
		cout<<arr[i]<<" ";
	}
}
}
void Leader::Accept()
{
	cout<<"Enter "<<iSize<<"Elements"<<endl;
	for(int i=0;i<iSize;i++)
		cin>>arr[i];
}
void Leader::Display()
{
	cout<<"The elements are\n";
	for(int i=0;i<iSize;i++)
		cout<<arr[i]<<" ";
}
int main()
{
	//Leader obj;
	int iSize=0;
	cout<<"Enter N elements";
	cin>>iSize;
	Leader *lobj1=new Leader(iSize);
	lobj1->Accept();
	//obj.Accept();
	//obj.Display();
	//lobj1->Display();
	lobj1->DisplayLeader();
	delete lobj1;
	return 0;
}
