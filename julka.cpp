#include<iostream>
using namespace std;
string subtract(string a,string b)
{
    int la=a.length();
    int lb=b.length();
    int i=la-1;
    int j=lb-1;
    while(j>=0)
    {
        if((int)a[i]>=(int)b[j]){
            a[i]=((int)a[i]-(int)b[j])+48;
            i--;j--;
        }
        else{
            a[i]=(((int)a[i]+10)-(int)b[j])+48;
            a[i-1]=(int)a[i-1]-1;
            i--;j--;

        }

    }
    return a;
}

string division(string a,int n)
{
    int la=a.length();
    int i=0;
    int k;
    while(i<=la)
    {
        if(((int)a[i]-48)%2==0)
        {
            k=((int)a[i]-48)/2;
            a[i]=k+48;
            i++;
        }
        else{
            k= ((int)a[i]-48)/2;
            a[i]=k+48;
            a[i+1]=(int)a[i+1]+10;
            i++;
        }

    return a;
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    string s=subtract(s1,s2);
    cout<<s;

  /* int t=10;
    while(t--)
    {
        string total_apple,more_apple;
        int num=2;
        cin>>total_apple>>more_apple;
        string klaudia,natalia,temp;
        temp=subtract(total_apple,more_apple);
        natalia=division(temp,num);
        klaudia=subtract(total_apple,natalia);
        cout<<klaudia<<endl<<natalia<<endl;

    }*/
}
