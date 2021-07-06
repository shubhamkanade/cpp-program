#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int start= 0  , end = 0;
    
    cin>>start>>end;
    
    for(int i = start;i < end;i++)
    {
        if(i == 1)
        {
            cout<<"one"<<end;
        }
        else if(i == 2)
        {
            cout<<"two"<<end;
        }
        else if(i == 3)
        {
            cout<<"three"<<end;
        }
        else if(i == 4)
        {
            cout<<"four"<<end;
        }
        else if(i == 5)
        {
            cout<<"five"<<end;
        }
        else if(i == 6)
        {
            cout<<"six"<<end;
        }
        else if(i == 7)
        {
            cout<<"seven"<<end;
        }
        else if(i == 8)
        {
            cout<<"eight"<<end;
        }
        else if(i == 9)
        {
            cout<<"nine"<<end;
        }
        else if(i % 2 == 0)
        {
            cout<<"even"<<end;
        }
        else if(i % 2 != 0)
        {
            cout<<"odd"<<end;
        }
    }
    return 0;
}
