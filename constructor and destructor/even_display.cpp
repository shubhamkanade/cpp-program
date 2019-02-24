#include<iostream>
using namespace std;
class math
{
	private:
		int *ptr;
		int size;
	public:	math();
		math(int);
		math(math&);
		~math();
		void accept();
		void display();
		void even();
		void odd();
};
//definations of all behaviour
math::math() //defalut constructor
{
	size=5;
	ptr=new int[size];
}
math::math(int ilength) //parameterized constructor
{
	size=ilength;
	ptr=new int[size];
}
// copy constructor
math::math(math& ref)
{
	size=ref.size;
	ptr=new int[size];
	for(int icnt=0;icnt<size;icnt++)
	{
		ptr[icnt]=ref.ptr[icnt];
	}
}
math::~math()
{
	delete []ptr;
}
//method to accept input from user
void math::accept()
{
	cout<<"enter the numbers=\n";
	for(int icnt=0;icnt<size;icnt++)
	{
	cin>>ptr[icnt];
	}
}
void math::display()
{
	cout<<"the elements are=\n";
	for(int icnt=0;icnt<size;icnt++)
	{
		cout<<ptr[icnt];
	}
}
// dispaly even numbers
void math::even()
{
	cout<<"even elements from array=\n";
	for(int icnt=0;icnt<size;icnt++)
	{
		if((ptr[icnt]%2)==0)
		{
			cout<<ptr[icnt];
		}
	}
}
// dipslay odd numbers
void math::odd()
{
	cout<<"odd elements from array=\n";
	for(int icnt=0;icnt<size;icnt++)
	{
		if((ptr[icnt]%2)!=0)
		{
			cout<<ptr[icnt];
		}
	}
}
// entry point function
int main()
{
	math obj1;
	math obj2(5);

	obj1.accept();
	obj2.accept();

	math obj3(obj2);

	obj1.display();
	obj2.display();

	obj3.display();

	obj1.even();
	obj1.odd();
	obj3.even();
	obj2.odd();
	return 0;
}



















































































