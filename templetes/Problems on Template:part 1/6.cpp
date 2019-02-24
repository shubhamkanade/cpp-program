#include<iostream>
using namespace std;

        template <class T1,class T2>
void Display(T1 no1,T2 no2)
{
        cout<<"Inside fun"<<no1<<" "<<no2;
}
int main()
{
        int i=10;
        float f=3.10f;
        Display(i,f);
	Display(f,i);
        return 0;

}

