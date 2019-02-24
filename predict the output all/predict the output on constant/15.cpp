#include<iostream>
using namespace std;
class Demo
{
        public:
                const int i;
                int j;
                Demo():i(10)
        {
                j=20;
        }
                void fun(Demo &ref)const
                {
                        ref.j++;
			//j++;
                }
};
int main()
{
        Demo obj1;
        obj1.fun(obj1);
        cout<<obj1.j<<endl;
        return 0;
}
