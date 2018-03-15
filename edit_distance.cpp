#include<iostream>
using namespace std;
int min(int a,int b,int c)
{
    if(a<=b){
        if(a<=c)
            return a;
        else
            return c;
    }
    else{
        if(b<=c)
            return b;
        else
            return c;
    }
}
int main()
{
    string a,b;
    cin>>a>>b;
    int la=a.length();
    int lb=b.length();
    int mat[lb+1][la+1];
    for(int i=0;i<la+1;i++)
        mat[0][i]=i;
    for(int i=0;i<lb+1;i++)
        mat[i][0]=i;
    for(int i=1;i<lb+1;i++){
        for(int j=1;j<la+1;j++){
            if(b[i-1]==a[j-1])
                mat[i][j]=mat[i-1][j-1];
            else
                mat[i][j]=min(mat[i][j-1],mat[i-1][j],mat[i-1][j-1])+1;
        }
    }

    cout<<mat[lb][la]<<endl;
}
