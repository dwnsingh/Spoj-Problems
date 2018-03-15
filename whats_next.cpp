#include<iostream>
using namespace std;
int main()
{
    int a1,a2,a3;
    cin>>a1>>a2>>a3;
    while(1){
        if(a1==0&&a2==0&&a3==0)
            break;
        else{
            if((a2-a1)==(a3-a2)&&(a3-a2)!=0){
                cout<<"AP ";
                cout<<a3+(a3-a2)<<endl;;
            }
            else if((a2/a1)==(a3/a2)){
                cout<<"GP ";
                cout<<a3*(a3/a2)<<endl;
            }

        }
        cin>>a1>>a2>>a3;
    }
    return 0;
}
