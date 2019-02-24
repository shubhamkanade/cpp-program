#include<iostream>
using namespace std;
class Demo
{
        public:
                Demo()
                {
                        cout<<"Default constructor\n";
                        
                }
                Demo(int x=10,int y=20)
                {
                        cout<<"parameterized const\n";
                        //fun();
                }
                ~Demo()
		{
cout<<"Destructor\n";
}

};
int main()
{
        Demo obj1;
	Demo obj2(11,21);
        return 0;
}

