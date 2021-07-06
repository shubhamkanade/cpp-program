#include<iostream>

using namespace std;

int get_missing_number(int*, int);

int main()
{
    int n = 0;

    cin >> n;

    int arr[n];

    for (size_t i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    
    cout << get_missing_number(arr,n);
}

int get_missing_number(int arr[], int n)
{
    if(arr == NULL)
        return -1;
    
    int total = (n +1 ) * ( n + 2) / 2;

    for (size_t i = 0; i < n; i++)
    {
        /* code */
        total -= arr[i];
    }

    return total;
}