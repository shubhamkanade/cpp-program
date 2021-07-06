#include<iostream>
using namespace std;


class student
{
	int marks;
	public: 
		int* fun()
		{
			return &marks;
		}
};

class education
{

	class student:public education
	{

	}

};
main()
{
	student s;
	int *ptr = s.fun();
	return 0;
}
