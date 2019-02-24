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
                Demo(int no):j(++no),i(no),k(no++)
        {
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
        cout<<obj.i<<obj.j<<obj.k<<endl;
        return 0;
}
                                                                                                                    
            
