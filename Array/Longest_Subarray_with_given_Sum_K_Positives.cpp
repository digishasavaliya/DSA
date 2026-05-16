#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size:";
    cin >> n;
    int arr[n];
    cout << "Enter the elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout<<"Enter the sum:";
    cin>>k;

    int maxlength=0;
   for(int i=0;i<n;i++)
   {
    for(int j=i;j<n;j++)
    {
        int cs=0;
        for(int k=i;k<=j;k++)
        {
            cs+=arr[k];
        } 
        if(cs==k)
        {
            maxlength=max(maxlength,j-i+1);
        }
    }
   }
   cout<<endl<<maxlength;
    return 0;
}