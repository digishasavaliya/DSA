#include<bits/stdc++.h>
using namespace std;
void reverse(int n,int arr[])
{
    if(n==0)
    {
        return;
    }
    else
    {
        cout<<arr[n-1]<<" ";
        reverse(n-1,arr);
    }
}
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int arrr[n];
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arrr[i];
    }
    reverse(n,arrr);
    return 0;
}