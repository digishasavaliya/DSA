#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    vector<int>result;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            result.push_back(i);
        }
    }
    cout<<"Divisors of "<<n<<" are: ";
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}