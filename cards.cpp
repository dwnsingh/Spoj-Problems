#include<iostream>
using namespace std;
#define ll long  long
ll int arr[1000007];
ll int mod=1000000+7;
ll int i;
int main()
{

    arr[0]=0;
    arr[1]=2;
    for( i=2;i<=1000000;i++){
        arr[i]=arr[i-1]+(arr[i-1]-arr[i-2])+3;
        arr[i]=(arr[i]+mod)%mod;
    }

    int t,N;
    cin>>t;
    while(t--){
        cin>>N;
        cout<<arr[N]<<endl;
    }

}
