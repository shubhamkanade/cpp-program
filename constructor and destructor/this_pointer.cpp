#include<iostream>
using namespace std;
class array
{
	private:
		int *ptr;
		int size;
	public:
		//array();
		array(int);
		~array();
		void accept();
		int frequency(int); //to count
			int search(int); //to search
};
//definations of all behaviour
array::array(int ilength=5)
{
	size=ilength;
	ptr=new int[size];
}
//destructor 
array::~array()
{
	delete []ptr;
}
// accepting ip from user
void array::accept()
{
	cout<<"elements elements";
	for(int icnt=0;icnt<size;icnt++)
	{
		cin>>ptr[icnt];
	}
}
int array::frequency(int no)
{
	int count=0,icnt=0;
	for(icnt=0;icnt<size;icnt++)
	{
		if(this->ptr[icnt]==no)
		{
			count++;
		}
	//	return count;
	}
return count;
}
int array::search(int no)
{
	int icnt=0;
	for(icnt=0;icnt<size;icnt++)
	{
		if(ptr[icnt]==no)
		{
			break;
		}
	}
	if(no==size)
	{
		return -1;
	}
	else
	{
		return icnt;
	}
}


int main()
{
array obj1;
array obj2(7);
array *p=new array(10);
obj2.accept();
cout<<"\n10 occurs at position="<<obj2.search(10);
cout<<"\nfrequency of 7="<<obj2.frequency(7);
return 0;
}




































