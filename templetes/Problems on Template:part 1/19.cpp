#include"Header.h"
template <class T>
class Base
{

        public:

                void fun(T no)
                {
                        cout<<"First fun: "<<no;
                }
                void fun(float no)
                {
                        cout<<"Second fun : "<<no;
                }

};

int main()
{
        Base <float>bobj;
        bobj.fun(3.0f);
        return 0;
}
