#include<iostream>
using namespace std;

int return_less_than_element(int*,int,int);

int main()
{
    int n = 0, number = 0;
    cin >> n;

    int arr[n];

    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> number;
    cout << "count is  " << return_less_than_element(arr, n, number);    
 return 0;   
}

int return_less_than_element(int arr[], int n, int number)
{
    if(arr == NULL) 
        return -1;
    int cnt = 0;

    for (size_t i = 0; i < n; i++)
    {
        /* code */
        if(arr[i] <= number)
            cnt++;
    }
    return cnt;   
}