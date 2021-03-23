/******************************************************************************



*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int subarraySum(int a[],int n,int sum)
{
    int curr_sum,i,j;
    
    for(int i=0;i<n;i++)

   {
    curr_sum=a[i];


for(int j=i+1;j<=n;j++)
{
    if(curr_sum==sum)
    {
        cout<<"sum found between index"<< i <<" and "<<j-1<<endl;
        return 1;
    }
    
    if(curr_sum>sum ||j==n)
    {
        break;
    }
    curr_sum=curr_sum+a[j];
}
}
cout<<"no suarray found ";
return 0;
}

int main()
{
    int a[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
    int n = sizeof(a) / sizeof(a[0]);
    int sum = 23;
    subarraySum(a, n, sum);

    return 0;
}
