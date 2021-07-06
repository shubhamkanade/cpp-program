#include<iostream>
using namespace std;

int main()
{
    int n = 0;

    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int max = 0, min = arr[0];

    ///12, 1234, 45, 67, 1
    for(int i = 0;i < n;i++)
    {
        if(arr[i] > max)
            max = arr[i];
        else if(arr[i] < min)
            min = arr[i];
    }

    cout << "max is " << max;
    cout << "min is " << min;

    
    return 0;
}