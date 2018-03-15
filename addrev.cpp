#include<iostream>

using namespace std;
int pow(int b,int p)
{
    if(p==0)
        return 1;
    else
        return b*pow(b,--p);

}
int reverse(int p)
{
    int i,arr[1000],j,count=0;
    for(int i=0;p!=0;i++)
    {
        j=p%10;
        arr[i]=j;
        p=p/10;
        count++;
    }

    int sum=0;
    for(i=0;i<count;i++)
    {
        sum=sum+arr[i]*pow(10,count-i-1);
    }
    return sum;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
    int a1,a2;
    cin>>a1>>a2;
    int ra1=reverse(a1);
    int ra2=reverse(a2);
    int sum=ra1+ra2;
    int revsum=reverse(sum);
    cout<<revsum<<endl;
    }
}
