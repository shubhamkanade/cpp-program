#include<iostream>
using namespace std;
template <class T>
class Demo
{
        public:
                T no1,no2;
                Demo(T x,T y)
                {
                        no1=x;
                        no2=y;
                }
};

int main()
{
	Demo <int> *p;
	Demo <char> *q;
	Demo <int> obj1(10,20);
	Demo <char> obj2('a','b');

	p=&obj1;
	q=&obj2;
	cout<<sizeof(*p)<<endl;
	cout<<sizeof(*q)<<endl;

	return 0;
}
