
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

int n1,n2,n3;
cin>>n1>>n2>>n3;
 int m1[n1][n2];
 int m2[n2][n3];
 //M1 matrix
 for(int i=0;i<n1;i++)
 {
 for(int j=0;j<n2;j++)
 {
 cin>>m1[i][j];
 }
 }
 //M2 matrix
 for(int i=0;i<n2;i++)
 {
 for(int j=0;j<n3;j++)
 {
 cin>>m2[i][j];
 }
 }
 int ans[n1][n3];
 for(int i=0;i<n1;i++)
 {
 for(int j=0;j<n3;j++)
 {
 ans[n1][n3]=0;
 }
 }

//Computation of answer after inputing
for(int i=0;i<n1;i++)//row for 1st matrix
{

    for(int j=0;j<n3;j++)//column of 2nd matrix
    {
    for(int k=0;k<n2;k++) //for multiply one by one every elemnt
    {
    ans[i][j]+=m1[i][k]*m2[k][j];

    }
  }
}
//printing the output
for(int i=0;i<n1;i++)
{
    for(int j=0;j<n3;j++)
    {
        cout<<ans[i][j] <<" ";

    }
    cout<<"\n";
}
return 0;
}
