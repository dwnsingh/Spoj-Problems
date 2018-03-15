#include<iostream>
using namespace std;

int main()
{
   int t,x,y,r;
   cin>>t;
   while(t--){
    cin>>x>>y;
    if(x==y){
        if(x%2==0)
            r=x*2;
        else
            r=x*2-1;
        cout<<r<<endl;
    }
    else if(x==y+2){
        if(x%2==0)
            r=x+y;
        else
            r=x+y-1;
        cout<<r<<endl;
    }
    else
        cout<<"No Number\n";
   }
   return 0;
}
