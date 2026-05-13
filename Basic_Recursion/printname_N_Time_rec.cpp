#include<bits/stdc++.h>
using namespace std;
void printn(int n,string name)
{
    if(n==0)
    {
        return;
    }
    else{
        cout<<name<<" ";
        printn(n-1,name);
    }
}
int main()
{
    int n;
    string name;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter the Name: ";
    cin>>name;
    printn(n,name);
    return 0;
}