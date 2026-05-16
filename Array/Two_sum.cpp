// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;

//     cout << "Enter the size of the array: ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter the array elements: ";

//     for(int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int t;

//     cout << "Enter the target sum: ";
//     cin >> t;

//     for(int i = 0; i < n; i++)
//     {
//         for(int j = i + 1; j < n; j++)
//         {
//             int sum = arr[i] + arr[j];

//             if(sum == t)
//             {
//                 cout << "Sum: " << sum
//                      << " Indices: " << i
//                      << " " << j << endl;
//             }
//         }
//     }

//     return 0;
// }


//for sorted array

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the size of the array:";
//     cin>>n;
    
//     int arr[n];
//     cout<<"Enter the elements of array:";

//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     int t;
//     cout<<"Enter the target:";
//     cin>>t;
//     cout<<endl;
//     int s=0,e=n-1;
//     while(s<e)
//     {
//         int sum=arr[s]+arr[e];
//         if(sum==t)
//         {
//             cout<<"sum:"<<sum<<endl;
//             cout<<"index:"<<s<<","<<e; 
//         }
//         else if(sum<t)
//         {
//             s++;
//         }
//         else{
//             e--;
//         }
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    
    int arr[n];
    cout<<"Enter the elements of array:";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int t;
    cout<<"Enter the target:";
    cin>>t;
    cout<<endl;
    map<int ,int >mp;
    int sub=0;
    for(int i=0;i<n;i++)
    {
        sub=t-arr[i];
        if(mp.find(sub)!=mp.end())
        {
            cout<<"found"<<endl<<mp[sub]<<i;
        }
        mp[arr[i]]=i;
    }
    
    return 0;
}