#include<bits/stdc++.h>
using namespace std;

void rotateArray(int n, int arr[], int k, string direction)
{
    int temp[n];

    if(direction == "right")
    {
        for(int i = 0; i < n; i++)
        {
            temp[(i + k) % n] = arr[i];
        }
    }
    else if(direction == "left")
    {
        for(int i = 0; i < n; i++)
        {
            temp[(i - k + n) % n] = arr[i];
        }
    }

    cout << "Rotated Array: ";

    for(int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
}

int main()
{
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;

    cout << "Enter k: ";
    cin >> k;

    k = k % n;

    string direction;

    cout << "Enter direction (right/left): ";
    cin >> direction;

    rotateArray(n, arr, k, direction);

    return 0;
}