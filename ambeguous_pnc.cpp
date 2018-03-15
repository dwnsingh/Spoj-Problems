#include<iostream>
using namespace std;
int main()
{
    int n;
    int index;

    cin>>n;
    while(n!=0){
         bool ambeguous=true;
        int arr[n];
        for(int i=1;i<=n;i++)
            cin>>arr[i];
        for(int i=1;i<=n;i++)
        {
            index=arr[i];
            if(arr[index]!=i){
                ambeguous=false;
            }
        }
        if(ambeguous)
            cout<<"ambiguous\n";
        else
            cout<<"not ambiguous\n";

        cin>>n;
    }
    return 0;
}
