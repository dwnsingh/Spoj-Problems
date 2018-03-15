#include<iostream>
using namespace std;
int *sort(int n,int arr[])
{
    for(int j=1;j<n;j++)
    {
        int key=arr[j];
        int i=j-1;
        while(i>=0 && arr[i]>key)
        {
            arr[i+1]=arr[i];
            i=i-1;

        }
        arr[i+1]=key;
    }
    return arr;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int mh[n];
        int wh[n];
        for(int i=0;i<n;i++)
            cin>>mh[i];
        for(int i=0;i<n;i++)
            cin>>wh[i];

        int *smh;
        int *swh;
        smh=sort(n,mh);
        swh=sort(n,wh);
        long long int mmds=0;
        for(int i=0;i<n;i++)
        {
            mmds=mmds+(*smh)*(*swh);
            smh++;
            swh++;
        }
        cout<<mmds<<endl;

    }




}
