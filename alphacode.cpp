#include<iostream>
using namespace std;
int main()
{
    string input;
    cin>>input;
    while(1){
        if(input[0]=='0')
            break;
        else{
            int l=input.length();
            int arr[l+1];
            arr[0]=1;
            arr[1]=1;
            for(int i=1;i<l;i++){
                if(input[i+1]!='0')
                    if(input[i]!='0'){
                       // cout<<"a1\n";
                        int k=((input[i-1]-48)*10+(input[i]-48));
                       // cout<<k<<endl;
                        if(k<=9){
                            arr[i+1]=arr[i];
                        }
                        else if(k>=10&&k<=26){
                            arr[i+1]=arr[i]+arr[i-1];
                        }
                        else{
                            arr[i+1]=arr[i];
                          //  cout<<"a3\n";
                        }
                    }
                    else{
                        int k1=((input[i-1]-48)*10+(input[i]-48));
                        if(k1>26)
                            arr[i+1]=0;
                        else if(k1==0)
                            arr[i+1]=0;
                        else
                            arr[i+1]=arr[i-1];
                    }
                else{
                    arr[i+1]=arr[i];
                }
            }
            cout<<arr[l]<<endl;
        }
        cin>>input;
    }
    return 0;
}
