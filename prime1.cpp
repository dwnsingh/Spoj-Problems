#include<iostream>
using namespace std;
#define ll long long

int main()
{
    ll int small,large;
    int t;
    ll int n=2;
    cin>>t;
     while(t--){
        cin>>small>>large;
        ll int diff=large-small;
        ll int arr[diff];
        for(ll int j=2;j<=diff;j++){
            arr[j]=0;
        }
        while(n<=diff/2){
            ll int k=2;
            while(k<=diff/n){
                arr[n*k]=1;
                k++;
            }
            for(ll int m=n+1;m<diff;m++){
                if(arr[m]==0){
                    n=m;
                    break;
                }
            }
        }

         for(ll int j=small;j<=large;j++){
                if(arr[j]==0){
            cout<<j<<endl;}
        }
        cout<<endl;
    }
    return 0;

}

