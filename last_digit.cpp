#include<iostream>
using namespace std;

int main()
{int t;cin>>t;
    while(t--)
    {
        int a;
        long long int b;
        cin>>a>>b;
        if(b==0)
            cout<<1<<endl;
        else{
            int k=b%4;
            switch(k){
            case 0:
                a=a*a*a*a;a=a%10;cout<<a<<endl;
               break;
            case 1:
                a=a%10;cout<<a<<endl;
                break;
            case 2:
                a=a*a;a=a%10;cout<<a<<endl;
                break;
            case 3:
                a=a*a*a; a=a%10;cout<<a<<endl;
                break;
            }
        }
    }
}
