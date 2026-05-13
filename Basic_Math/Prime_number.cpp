#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number:";
    cin>>n;
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cnt++;
        }
    }
    if(cnt==2)
    {
        cout<<"Prime Number";
    }
    else
    {
        cout<<"Not a Prime Number";
    }
}