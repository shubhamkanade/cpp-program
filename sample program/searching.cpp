#include<iostream>
using namespace std;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

class searching
{
	private:
		int *ptr;
		int iSize;
		BOOL sorted;
	public:
		searching(int);
		searching(searching &);
		~searching();
		void accept();
		void display();
		int LinearF(int);
		int LinearL(int);
		int LinearBI(int);
		int BinarySearch(int );
};
searching::searching(int iLength=10)
{
	cout<<"In parameterized with deault constructor\n";
	iSize=iLength;
	sorted=FALSE;
	ptr=new int[iSize];
}
searching::searching(searching& ref)
{
	cout<<"In copy constructor\n";
	iSize=ref.iSize;
	sorted=ref.iSize;
	ptr=new int[iSize];

	for(int i=0;i<iSize;i++)
	{
		ptr[i]=ref.ptr[i];
	}
}
searching::~searching()
{
	delete []ptr;
}
void searching::accept()
{
int i=0;
	cout<<"enter the elements";
	for(int i=0;i<iSize;i++)
	{
		cin>>ptr[i];
	}

	for(int i=0;i<iSize-1;i++)
	{
		if(ptr[i]>ptr[i+1])
			break;
	}
	if(i==iSize-1)
		sorted=TRUE;
	else
		sorted=FALSE;
}
void searching::display()
{
	cout<<"elemets from array";
	for(int i=0;i<iSize;i++)
	{
		cout<<"\t"<<ptr[i];
	}
}
int searching::LinearF(int no)
{int i=0;

	for(int i=0;i<iSize;i++)
	{
		if(ptr[i]==no)
			break;
	}
	if(i==iSize)
		return -1;
	else
		return i+1;
}
int searching::LinearL(int no)
{
	int i=0;
	for(i=iSize-1;i>=0;i--)
	{
		if(ptr[i]==no)
			break;
	}
	if(i==-1)
		return -1;
	else
		return i+1;
}
int searching::LinearBI(int no)
{
	int iStart=0,iEnd=iSize-1,i=0;
	while(iStart<=iEnd)
	{
		if((ptr[iStart]==no)||(ptr[iEnd]==no))
			break;
		iStart++;
		iEnd--;
	}
	if(iStart>iEnd)
		return -1;
	else
	{
		if(ptr[iStart]==no)
			return iStart+1;
		else
			return iEnd+1;
	}
}
int searching::BinarySearch(int no)
{
	int iLow=0,iMid=0,iHigh=iSize-1;

	if(sorted==FALSE)
		return(LinearF(no));

	while(iLow<=iHigh)
	{
		iMid=(iLow+iHigh)/2;

		if(ptr[iMid]==no)
			break;

		else if(no>ptr[iMid])
			iLow=iMid+1;

		else if(no<ptr[iMid])
			iLow=iMid-1;

	}
	if(ptr[iMid]==no)
		return iMid+1;
	else
		return -1;
}
int main()
{
	searching obj1;
	obj1.accept();
	cout<<obj1.LinearF(11);
	cout<<obj1.LinearL(11);
	searching obj2(7);
	cout<<obj2.LinearBI(21);
	searching obj3(obj2);
	cout<<obj3.LinearBI(21);
	searching *ptr=new searching(); //call default constructor
	ptr->accept();
	cout<<"the value is at="<<ptr->BinarySearch(51);
	searching obj4(*ptr);
	//obj4.display();
	//cout<<(*ptr).iSize;
	cout<<"\nthe serach value is at="<<obj4.BinarySearch(51);
}




















