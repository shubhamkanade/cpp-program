#include<iostream>
using namespace std;
class Demo
{
        public:
                int i,j;
                Demo()
                {
                        cout<<"Default\n";
                }
                Demo(int no)
                {
                        cout<<"Paramerized1\n";
                }
                     Demo(int no1,int no2)
                {
                        cout<<"Paramerized2\n";
                }

                ~Demo()
                {
                        cout<<"Destructor\n";
                }
}obj1[]={10,20,(30,40),50};
int main()
{
        cout<<"Inside Main"<<endl;
        return 0;
}


