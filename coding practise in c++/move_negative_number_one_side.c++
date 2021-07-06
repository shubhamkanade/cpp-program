#include<iostream>
using namespace std;

int main()
{
    int n = 0;

    cin >> n;

    int arr[n];

    for(int i = 0;i < n; i++)
        cin >> arr[i];

    int start = 0, end = n - 1;

    while(start < end)
    {
        
        while (arr[start] < 0 && start <= end)
        {
            start++;
        }

        while (arr[end] > 0 && start <= end)
        {
            end--;
        }

        if(arr[start] > 0 && arr[end] < 0)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
        
    }
    
    

    for(int i : arr)
        cout << i << " ";

    return 0;
}

