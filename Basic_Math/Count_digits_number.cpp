#include <bits/stdc++.h>
using namespace std;
long long broth_count(long long n)
{
    long long c=0;
    while(n>0)
    {
        n=n/10;
        c++;
    }
    return c;
}
long long optimal_count(long long n)
{
    return int(log10(n)+1);
}
int main()
{
    //brothforce method
    long long n;
    cout<<"Enter a number: ";
    cin>>n;
    long long c=broth_count(n);

    cout<<"Number of digits: "<<c;

    long long count=optimal_count(n);
    cout<<"\nNumber of digits: "<<count;
    return 0;
}