#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	int tot_p,aff;
	int un_aff;
	int ans=0;
	cin>>t;
	while(t--)
	{
	    cin>>tot_p>>aff;
	   un_aff=tot_p-aff;
	   if(un_aff>aff)
	   {
	       ans=aff;
	   }
	   else
	   {
	       ans=un_aff;
	   }
	   
	   cout<<ans<<endl;
	}
	return 0;
}
