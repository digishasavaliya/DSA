#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    int revno=0;
    int temp=n;
    int r=0;
    while(n>0)
    {
        r=n%10;
        revno=revno*10+r;
        n=n/10;
    }
    if(temp==revno)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a palindrome");
    }
    return 0;
}