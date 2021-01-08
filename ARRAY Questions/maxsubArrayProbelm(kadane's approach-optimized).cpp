#include<bits/stdc++.h>
#include<climits>.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int currsum=0;

    int max_sum=INT_MIN;

for(int i=0;i<n;i++){
 currsum+= a[i];
if(currsum<0)
{
currsum=0;
}

       max_sum=max(max_sum,currsum);



     }



cout<<max_sum<<endl;



return 0;
}
