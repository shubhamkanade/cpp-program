#include<iostream>
using namespace std;

int main()
{
    int n = 0;

    cin >> n;

    int arr[n];

    for(int i = 0;i < n; i++)
         cin >> arr[i];

    int k = 2;

    int j = k;

    float c = n / (float)k;
    //cout << c << endl;
    int count = 0;
    for (size_t i = 0; i < n; i++)
    {
        /* code */

        if(j-- != 0)
        {
            if(arr[i] == 8)
                count++;
        }

        if(j == 0)
            j = 2;

        //3, 5, 2, 4, 9, 3, 1, 7, 3, 11, 12, 3
         //{ 21, 23, 56, 65, 34, 54, 76, 32, 23, 45, 21, 23, 25}  
            ///5, 8, 7, 12, 14, 3, 9}
    }
    if (count >=  c) 
        cout << "Yes";
    else    
        cout << "No";
    return 0;
}