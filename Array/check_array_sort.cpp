#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool sorted=true;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            sorted=false;
            break;
        }
    }
    if(sorted)
    {
        cout<<"The array is sorted.";
    }
    else
    {
        cout<<"The array is not sorted.";
    }
    return 0;
}