#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=2;
    int count=0;
    while(1){
         if(row*row>n)
            break;
         else{
            int row1=row*row;

             while(row1<=n){
                count++;
                row1=row1+row;

             }
         }
         row++;
    }
    cout<<count+n<<endl;
    return 0;
}
