#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:";
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(int i = 0;i<=n;i++)
    {
        int num=arr[i];
        int count=0;
       for(int j=0;j<n;j++)
       {
         if(arr[j]==num)
         {
          count++;
         }
       }
       if(count==1)
    {
        cout<<arr[i];
    }
    }
    
    return 0;
}