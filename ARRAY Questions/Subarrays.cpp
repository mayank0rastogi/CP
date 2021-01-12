#include<bits/stdc++.h>
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

for(int i=0;i<n;i++){
 for(int j=i;j<n;j++)
 {
     for(int k=i;i<j;k++){
cout<<a[k]<<endl;

     }

 }
}
 

return 0;
}