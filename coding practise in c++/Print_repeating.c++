#include<iostream>

using namespace std;

void printRepeating(int arr[], int n)
{
    for (size_t i = 0; i < n; i++)
    {
        if(arr[abs(arr[i])] >= 0)
            arr[abs(arr[i])] = -arr[abs(arr[i])];
        else
            cout << abs(arr[i]) << " ";       
    }
    
    
}
int main()
{
    int arr[] = { 1, 2, 3, 4 ,3 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    printRepeating(arr, arr_size);
    return 0;
}