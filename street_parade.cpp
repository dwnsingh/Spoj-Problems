#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main()
{
    int n,k;

        cin>>n;
        while(n!=0)
        {
            queue<int> street;
            stack<int> side_street;
            for(int i=0;i<n;i++){
                cin>>k;
                street.push(k);
            }

        int need=1;
        while(!street.empty()||!side_street.empty())
        {
            if(!street.empty()&&street.front()==need)
            {
                street.pop();
                need++;
            }
            else{
                if(!side_street.empty()&&side_street.top()==need)
                {
                    side_street.pop();
                    need++;
                }
                else{
                    if(!street.empty()){
                        int s=street.front();
                        side_street.push(s);
                        street.pop();
                    }
                    else{
                        break;
                    }
                }
            }


        }
        if(need==n+1)
            cout<<"yes\n";
        else
            cout<<"no\n";

        cin>>n;

    }
    return 0;
}
