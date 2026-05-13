#include<bits/stdc++.h>
using namespace std;
void fibo(int a,int b,int n)
{
    if(n<0)
        return ;
    cout<<a<<" ";
    fibo(b,a+b,n-1);
}
int main()
{
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    fibo(0,1,n);
    return 0;
}