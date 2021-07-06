#include<iostream>
using namespace std;

int sum_of_digit_palindrome(int);

int main()
{
    long int number = 0;

    cin >> number;

    cout << sum_of_digit_palindrome(number);
    return 0;
}

int sum_of_digit_palindrome(int number)
{
    if(number == 0)
        return -1;
    int sum = 0, temp = 0, rev = 0;

    while (number != 0)
    {
        sum  += number % 10;
        number /= 10;
    }

    temp = sum;
    while(temp != 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

        if(rev == sum)
            return 1;
        else    
            return 0;
}   