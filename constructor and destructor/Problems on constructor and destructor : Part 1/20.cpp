#include<iostream>
using namespace std;
int no=10;
class Demo
{
        public:
                int i,j,k;
          
                Demo():j(++no),i(no),k(no++)
        {
                //i=30;
                cout<<"default ";
        }
                ~Demo()
                {
                        cout<<"Destructor\n";
                }
};
int main()
{
        Demo obj;
        cout<<obj.i<<"\t"<<obj.j<<"\t"<<obj.k<<endl;
        return 0;
}
          
