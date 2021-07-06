#include<iostream>
using namespace std;

int main()
{
    int n = 0;

    cin >> n;

    int arr[n];

    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0;
    for(int i : arr)
    {
        if(i == 5)
            count++;
    }
    
    printf("%d",count);
}