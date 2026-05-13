#include<bits/stdc++.h>
using namespace std;
int gg(int a,int b)
{
    if(a>0 && b>0)
    {
        if(a==b)
        {
            return a;
        }
        else if(a>b)
        {
            return gg(a-b,b);
        }
        else
        {
            return gg(a,b-a);
        }
}
}
int main()
{
    //brothforce method
    int n1, n2;

    cout << "Enter Two numbers:" << endl;

    cout << "Number 1: ";
    cin >> n1;

    cout << "Number 2: ";
    cin >> n2;

    int gcd = 1;

    for(int i = 1; i <= min(n1, n2); i++)
    {
        if(n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }

    cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;


    //optimal method
    int a,b;
    cin>>a>>b;
    int g=gg(a,b);
    cout<<"GCD of "<<a<<" and "<<b<<" is: "<<g<<endl;
    return 0;
}