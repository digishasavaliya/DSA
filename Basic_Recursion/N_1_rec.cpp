#include<bits/stdc++.h>
using namespace std;
void printn(int n)
{
    if(n==0)
    {
        return;
    }
    else{
        cout<<n<<" ";
        printn(n-1);
        
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