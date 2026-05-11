#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter the Number: ";
    cin >> n;

    int original = n;
    int temp = n;

    int digit = 0;

    
    while(temp)
    {
        temp = temp / 10;
        digit++;
    }

    temp = n;

    int sum = 0;
    int r = 0;

    // Armstrong calculation
    while(temp)
    {
        r = temp % 10;
        sum = sum + pow(r, digit);
        temp = temp / 10;
    }

    if(sum == original)
    {
        cout << "Armstrong Number";
    }
    else
    {
        cout << "Not an Armstrong Number";
    }

    return 0;
}