#include<bits/stdc++.h>
using namespace std;
void printn(int n)
{
    if(n==0)
    {
        return;
    }
    else{
        printn(n-1);
        cout<<n<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    printn(n);
    return 0;
}