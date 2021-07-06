#include<iostream>
using namespace std;

void find_repeat_missing(int*,int);

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

    find_repeat_missing(arr,n);
}

void find_repeat_missing(int arr[], int n)
{
    if(arr == NULL)
        return;
    
    for (size_t i = 0; i < n; i++)
    {
        /* code */

        if(arr[abs(arr[i]) - 1] > 0)
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
        else
            cout << abs(arr[i]) << endl;
   }

   for (size_t i = 0; i < n; i++)
   {
       /* code */
        if(arr[i] > 0)
            cout << i + 1 << endl;
   }
   

    
}