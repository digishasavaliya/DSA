#include<bits/stdc++.h>
using namespace std;
int sum1(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n+sum1(n-1);
}
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int sum=sum1(n);
    cout<<"Sum of first "<<n<<" natural numbers is: "<<sum;
    return 0;
}