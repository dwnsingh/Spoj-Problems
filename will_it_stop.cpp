#include<iostream>
using namespace std;
int main()
{
    unsigned long long int n;
    cin>>n;
    bool av=false;
    while (n > 1){
        if(n%2 ==0 )
            n=n/2;
        else{
            n=3*n+3;
            av=true;
            break;
        }
    }
    if(av)
        cout<<"NIE\n";
    else
        cout<<"TAK\n";
}
