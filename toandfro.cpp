#include<iostream>
using namespace std;
int main()
{
    int col,row;
    while(1){
        cin>>col;
        if(col==0)
            break;
        else{
            string s;
            cin>>s;
            int l=s.length;
            if(l%col==0)
                row=l/col;
            else
                row=l/col+1;

            string mat[row][col];
            int i=0;
            while(s[i]!='\0'){

            }
        }
    }
}
