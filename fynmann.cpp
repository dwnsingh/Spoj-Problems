#include<iostream>
using namespace std;
int main()
{

    while(1)
    {
        int n;
        cin>>n;
        if(n==0)
            break;
        else{
            long long int sum=0;
            for(int i=1;i<=n;i++)
            {
                sum=sum+i*i;
            }
            cout<<sum<<endl;
        }
    }
}
