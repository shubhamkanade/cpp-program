#include<iostream>
using namespace std;
class demo
{
        public:
                void fun(char i)
                {
                }
                void fun(float d)
                {
                }
};
int main()
{
       demo obj;
char ch='a';
int i=11;
float f=3.14f;
double d=3.14;

obj.fun((char)i);
//obj.fun(ch);
//obj.fun(f);
obj.fun((float)d);
return 0;
}


