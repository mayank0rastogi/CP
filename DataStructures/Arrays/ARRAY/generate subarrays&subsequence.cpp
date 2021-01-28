#include<bits/stdc++.h>

using namespace std;

/*
void subarray(int a[],int n)
{

for(int i=0;i<n;i++)///starting point
{

    for(int j=i;j<n;j++)///ending point
    {
///print subarray between starting and ending point
      for(int k=i;k<=j;k++)
      {

          cout<<a[k]<<" ";
      }
      cout<<endl;
    }
}
}
*/
void generate_subsequences(int a[],int n)
{
int size=pow(2,n);
for(int i=1;i<size;i++)///starting point
{

    for(int j=0;j<n;j++)///ending point
    {
///check if jth bit in the i is set or not
/// if set than print jth element  from a[]
      if(i&(1<<j))
          cout<<a[j]<<" ";
      }
      cout<<endl;
    }
}


int main()
{ // Change n at the top to change number of elements
    // in an array

    int a[]={1,2,3,4};
    int n=sizeof(a)/sizeof(a[0]);
cout<<"All Non Empty SubSequences\n";
    generate_subsequences(a,n);

    return 0;
}
