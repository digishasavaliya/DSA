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
    cout<<"the array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int res[n];
    for(int i=0;i<n;i++)
    {
        res[i]=0;
    }
    for(int i=1;i<n;i++)
    {
        res[i-1]=arr[i];
    }
    res[n-1]=arr[0];
    cout<<"\nthe array after left rotating by one: ";
    for(int i=0;i<n;i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;

}