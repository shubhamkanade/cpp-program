/*

   Smart Pointer->
   When we want to call member function of class then we have to use object or pointer of a class
   if we call by using object then we have to use dot(.) opearator	to access member function
   and if call by using pointer thn we have to use indirect(->)operator to acces member function

   but if we want to call member function by using object (->) operator gives error

 */
#include<iostream>
using namespace std;
class Demo
{
	public:

		void Sun();
		void Gun();
};

void Demo::Sun()
{
	cout<<"Call sun function by using smart pointer"<<endl;
}
 void Demo::Gun()
{
cout<<"Call gun function by smart pointer"<<endl;

}
class SmartPointer
{
	public:
		Demo d;
		Demo* operator ->();
};

Demo* SmartPointer::operator ->()
{
	return &d;

}








int main()
{
	SmartPointer sp;
	sp->Sun();
	sp->Gun();




	return 0;
}



