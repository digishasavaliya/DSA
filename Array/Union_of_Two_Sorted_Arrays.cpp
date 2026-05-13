// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the size of the array: ";
//     cin>>n;
//     int arr1[n];
//     cout<<"Enter the elements of the array: ";
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr1[i];
//     }
//     int m;
//     cout<<"Enter the size of the second array: ";
//     cin>>m;
//     int arr2[m];
//     cout<<"Enter the elements of the second array: ";
//     for(int i=0;i<m;i++)
//     {
//         cin>>arr2[i];
//     }
//     cout<<"the first array: ";
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr1[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"the second array: ";
//     for(int i=0;i<m;i++)
//     {
//         cout<<arr2[i]<<" ";
//     }
//     cout<<endl;
//     map<int ,int>mp;
//     for(int i=0;i<n;i++)
//     {
//         mp[arr1[i]]++;
//     }
//     for(int i=0;i<m;i++)
//     {
//         mp[arr2[i]]++;
//     }
//     cout<<"the union of the two arrays: ";
//     for(auto it:mp)
//     {
//         cout<<it.first<<" ";
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the size of  arrays: ";
    cin>>n>>m;
   

    int arr1[n], arr2[m];
cout<<"Enter the elements of the first array: ";
    for(int i = 0; i < n; i++)
        cin >> arr1[i];
cout<<"Enter the elements of the second array: ";
    for(int i = 0; i < m; i++)
        cin >> arr2[i];
    set<int>s;

    for(int i=0;i<n;i++)
    {
        s.insert(arr1[i]);
    }
    for(int i=0;i<m;i++)
    {
        s.insert(arr2[i]);
    }
    cout<<"the union of the two arrays: ";

   for(auto it:s)
   {
         cout<<it<<" ";
   }
    return 0;
}