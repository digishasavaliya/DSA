#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter the element of array: ";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int cnt = 0;
    int maxcnt = 0;

    for(int i=0;i<n;i++)
    {
        if(arr[i] == 1)
        {
            cnt++;
            maxcnt = max(maxcnt, cnt);
        }
        else
        {
            cnt = 0;
        }
    }

    cout << "\nMaximum consecutive 1s: " << maxcnt;

    return 0;
}   