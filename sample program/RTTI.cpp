#include<iostream>
#include<typeinfo>
using namespace std;
class demo
{
//code
};
int main()
{
int i;
float g;
char *ptr;
demo dobj;

cout<<typeid(i).name();
cout<<typeid(g).name();
return 0;
}
