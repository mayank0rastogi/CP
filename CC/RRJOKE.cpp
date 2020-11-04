#include <iostream>
using namespace std;

int main() {
	int t,n,a,b;
	cin>>t;
	
	while(t--)
	{
	   cin>>n;
	   int c=0;
	   for(int i=1;i<=n;i++)
	   {
	       cin>>a>>b;
	       c=c^i;
	   }
	   cout<<c<<endl;
	}
	return 0;
}