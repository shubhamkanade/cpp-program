#include<iostream>
using namespace std;
class Demo
{
        public:
                void fun(int *p)
                {
                        cout<<"first defiantion";
                }
		void fun(void *p)
		{
			cout<<"second defnation";
		}
                void fun(float *p)
                {
                        cout<<"third defiantion";
                }

};
int main()
{
        Demo obj;
        int no=10;
        double d=10.0;
        char ch='a';
	float f=3.0f;
        obj.fun(&no); //first defiantion
        obj.fun(&d); //s d
        obj.fun(&ch); //s d
	obj.fun(&f); //t d
        return 0;
}

