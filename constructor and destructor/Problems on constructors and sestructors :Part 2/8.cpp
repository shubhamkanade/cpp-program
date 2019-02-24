#include<iostream>
using namespace std;
class Demo
{
        public:
                Demo()
                {
                        cout<<"Default constructor\n";
                        fun();
                }
                ~Demo()
                {
                        cout<<"Destructor\n";
                        fun();
                }
                void fun()
                {
			Demo obj;
                        cout<<"Fun\n";
                }
};
int main()
{
        Demo obj;
        //return 0;
}

