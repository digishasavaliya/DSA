#include<bits/stdc++.h>
using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the size of the array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of the array: ";
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int min=arr[0];
//     for(int i=1;i<n;i++)
//     {
//         if(arr[i]<min  )
//         {
//             min=arr[i];
//         }
//     }
//     int second_min=INT_MAX;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]>min && arr[i]<second_min)
//         {
//             second_min=arr[i];
//         }
//     }
//     cout<<"The second smallest element in the array is: "<<second_min;
//      int max=arr[0];    
//     for(int i=1;i<n;i++)
//     {
//         if(arr[i]>max)
//         {
//             max=arr[i];
//         }
//     }
//     int second_max=INT_MIN;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]<max && arr[i]>second_max)
//         {
//             second_max=arr[i];
//         }
//     }
//     cout<<"The second largest element in the array is: "<<second_max;
//     return 0;
// }
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
    int smallest=INT_MAX;
    int second_smallest=INT_MAX;
    int largest=INT_MIN;
    int second_largest=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            second_smallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]>smallest && arr[i]<second_smallest)
        {
            second_smallest=arr[i];
        }
        if(arr[i]>largest)
        {
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>second_largest)
        {
            second_largest=arr[i];
        }
    }
    cout<<"The second smallest element in the array is: "<<second_smallest<<endl;
    cout<<"The second largest element in the array is: "<<second_largest<<endl; 
    return 0;
}