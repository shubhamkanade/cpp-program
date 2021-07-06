#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{

int number = 0;
	
cin >> number;

switch(number)
{
	case 1 : cout << "One" << endl;
		 break;
	case 2 : cout << "Two" << endl;;
			break;

	default : cout << "Not a accepted number" << endl;

}

return 0;

}
