#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout<<"Enter the elements of the array: ";
    vector<int> arr(n);
    cout<<"the array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int j = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    cout<<"the array after moving all zeros to the end: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}