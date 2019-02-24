/*
        Run-Time Type Identification : 
                => Compile time type checking is static typechecking. 
                => Compiler checks appropriate type for correctness for this if there is error compiler generates error or warning.
                => If we have to check datatypes at run time,then we have to do it by dyanamic checking we need to use operator dyanamic cast.

        In the below ex. we implement concept of RTTI.
                => We use typeid operator to get the appropriate datatype,for this you need to include the typeinfo.h header file.
                => We have used typeid operator which returns the reference of typeinfo class and the operator accepts the name 
                        of variable.
                => To get the appropriate name we use function name() which returns the name of user defined name of that particular datatype.
        Its major use is in runtime Ploymorphism,in which we can check the type of object at run time.
*/

#include<iostream>
using namespace std;
#include<typeinfo>
class demo
{
	//code
};
int main()
{
	int i;
	float f;
	demo dobj;
	cout<<typeid(i).name()<<endl;
	cout<<typeid(f).name()<<endl;
	cout<<typeid(demo).name()<<endl;
}
