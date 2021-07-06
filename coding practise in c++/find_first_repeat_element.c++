#include<iostream>

using namespace std;

void printFirstRepeating(int arr[], int n)
{
    int i = 0,j=0;

    for(i = 0; i < n;i++)
    {
        for(j = i + 1;j < n;j++)
        {
                if(arr[i] == arr[j])
                {
                        cout << "element is " << arr[i];
                        return;
                }
        }
    }
}
int main()
{
    int arr[] = {6, 10, 5, 4, 9, 120, 4, 6, 10};
 
    int n = sizeof(arr) / sizeof(arr[0]);
    printFirstRepeating(arr, n);
}