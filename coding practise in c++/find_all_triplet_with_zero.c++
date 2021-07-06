// 0 -1 2 -3 1

 /*o/p = 0 -1 1 
    2 -3 1 */
#include<iostream>
using namespace std;

void find_tripplet(int arr[], int n)
{
    if(arr == NULL)
        return;

    for (size_t i = 0; i < n - 2; i++)
    {
        for (size_t j = i + 1; j < n - 1; j++)
        {
            /* code */
            for (size_t k = j + 1; k < n; k++)
            {
                /* code */
                if(arr[i] + arr[j] + arr[k] == 0)
                    printf("%d %d %d\n",arr[i],arr[j],arr[k]);
            }
            
        }
        
    }
    
}

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
    find_tripplet(arr,n);        
    
}