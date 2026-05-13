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
    int k;
    cout<<"Enter the number for search:";
    cin>>k;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            cout<<"Element found at index: "<<i;
            return 0;
        }
    }
    cout<<"Element not found";
    return 0;
}