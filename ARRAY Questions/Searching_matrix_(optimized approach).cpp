#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int n,m;
     int target;
     cin>>n>>m;
     cin>>target;

     int a[n][m];
     //input matrix
     for(int i=0;i<n;i++)
     {

         for(int j=0;j<m;j++)
         {
             cin>>a[i][j];

         }
     }
     //searching
     int r=0,c=m-1;
     bool found=false;
     while(r<n and c>= 0)
     {

             if(a[r][c]==target);
             found= true;


     if(a[r][c]>target)
     {
         c--;
     }

     else
     {
         r++;
     }

 }
 //int elem_found=a[r][c];
     if(found)
     {
         cout<<"the element is found "<<endl;
     }
     else
     {
         cout<<"element is not found "<<endl;
     }
     return 0;
 }
