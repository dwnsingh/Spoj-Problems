#include<bits/stdc++.h>
using namespace std;
int main()
{
    float c;
    float i;

    while(1){
        cin>>c;
        float sum=0.00;

        if(c==0.00)
            break;
        else{

            i=2;

            while(1){

                sum=sum+(1/i);

                i++;
                if(sum>=c){
                    break;}
            }
            cout<<i-2<<" card(s)\n";
        }

    }
}
