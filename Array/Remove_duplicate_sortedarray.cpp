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
   for(int i=0;i<n;i++)
   {
         if(i==0 || arr[i]!=arr[i-1])
         {
              res[i]=arr[i];
         }      
   }
    cout<<"\nthe array after removing duplicates: ";
    for(int i=0;i<n;i++)
    {
        if(res[i]!=0)
        {
            cout<<res[i]<<" ";
        }
    }
    return 0;
}