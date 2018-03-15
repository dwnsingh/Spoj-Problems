/*#include<bits/stdc++.h>
using namespace std;
#define ll long long
int partition(ll int *a,int start,int size){

	int j,x;
	int i;
    x=a[size];
    i=start-1;
    for(j=start;j<size;j++)
        {
            if(a[j]< x){
                i=i+1;
                swap(a[i],a[j]);
            }
        }
	swap(a[i+1],a[size]);
	return i+1;
}
void quicksort(ll int *a,int start,int size){

    int q;
	int r=start;
    if(r<size)
	{   q=partition(a,r,size);

		quicksort(a,r,q-1);
		quicksort(a,q+1,size);

	}

}
int  main()
{
    int t;
    ll int need;
    int friends;
    cin>>t;
    for(int k=0;k<t;k++){
        cin>>need;
        cin>>friends;
        ll int arr[friends];
        for(int i=0;i<friends;i++)
            cin>>arr[i];
        quicksort(arr,0,friends);

       ll int sum=0;
       int count=0;

       for(int i=friends-1;i>=0;i--){
            sum=sum+arr[i];
            count++;

            if(sum>=need)
                break;
       }

        if(sum>=need)
            cout<<"Scenario #"<<k+1<<":"<<endl<<count<<endl<<endl;
        else
            cout<<"Scenario #"<<k+1<<":"<<endl<<"impossible"<<endl<<endl;


    }
    return 0;
}
*/


#include <iostream>
#include <vector>
#include <algorithm> // for sort()
#include <numeric> //for accumulate()

using namespace std;

int main()
{
	int t;
	cin >> t;
	int i;
	for( i = 0 ; i < t; i++ )
	{
		int need;
		cin >> need;
		int n;
		cin >> n; // number of friends
		vector<int> stamps(n);

		int j;
		for( j = 0; j < n; j++ )
		{
			cin >> stamps[j];
		}
		//find the sum of all stamps from friends; use library algorithm
		long long total = accumulate(stamps.begin(), stamps.end(), 0 );

		if( total < need )
		{
			cout << "Scenario #" << (i+1) << ":" << endl << "impossible" << endl << endl;
		}
		else
		{
			//sort coins in descending order; use library algorithm
			sort( stamps.begin(), stamps.end(), greater<int>() );
			long long t = 0;
			j = 0;
			//borrow until you jave just enough stamps
			while ( t < need )
			{
				t += stamps[j];
				j++;
			}
			//we need to borrow from j friends
			cout << "Scenario #" << (i+1) << ":" << endl << j << endl << endl;
		}
	}
	return 0;
}
