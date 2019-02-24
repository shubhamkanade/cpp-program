#include<iostream>
using namespace std;
class Demo
{
        public:
                int i,j,k;
                Demo()
                {
                        cout<<"Dafault\n";
                }
                Demo(int no):j(no),i(no),k(no++)
        {
		i=30;
                cout<<"Paramerized1 ";
        }
                ~Demo()
                {
                        cout<<"Destructor\n";
                }
};
int main()
{
        Demo obj(10);
        cout<<obj.i<<"\t"<<obj.j<<"\t"<<obj.k<<endl;
        return 0;
}           
