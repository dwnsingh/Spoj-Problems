#include<iostream>
using namespace std;
#define ll long long
int main()
{
    ll int t,n,sum,child;

    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;

        for(ll int i=0;i<n;i++)
        {
            cin>>child;
            sum=sum+child;
             if(sum>=n)
                sum%=n;
        }


        if(sum==0)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
