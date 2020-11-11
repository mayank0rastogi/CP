#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll arr[n];
	    ll k=0;
	   
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    for(int i=0;i<n-1;i++)
	    {
	        if(arr[i]<arr[i+1])
	        {
	            k++;
	        }
	    }
	    cout<<(k*(k+1))/2<<endl;
	}
	return 0;
}
