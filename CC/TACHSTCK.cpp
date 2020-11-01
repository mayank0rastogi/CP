#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int n,x,y=0,i;
    cin>>n>>x;
    long long int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
       if(a[i+1]-a[i]<=x)
       {
           y++;
           i++;
       }
    }
    cout<<y<<endl;

	// your code goes here
	return 0;
}
