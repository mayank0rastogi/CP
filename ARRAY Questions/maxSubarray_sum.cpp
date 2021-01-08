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
    int max_sum=INT_MIN;

for(int i=0;i<n;i++){
  for(int j=i;j<n;j++){
  int sum =0;
     for(int k=i;k<=j;k++){
       sum+=a[k];


     }
     max_sum=max(max_sum,sum);

 }
}
cout<<max_sum<<endl;



return 0;
}
