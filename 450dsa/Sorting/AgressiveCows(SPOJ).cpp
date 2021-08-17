/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;



int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n,c;
      cin>>n>>c;
      int a[n];
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }
      sort(a,a+n);
      int lower_bound=1;
      int upper_bond=1e9;
      
      int ans=0;
      while(lower_bound<=upper_bond)
      {
          int mid=(lower_bound+upper_bond)/2;
          
          //we have set 1 st cow as 1
          int cow=1;
          int prev=a[0];
          for(int i=1;i<n;i++)
          {
              if(a[i]-prev>=mid)
              {
                  cow++;
                  prev=a[i];
                  if(cow==c)
                  {
                      break;
                  }
                  
              }
          }
          
          if(cow==c)
          {
              ans=mid;
              lower_bound=mid+1;
              
          }
          else
          {
              upper_bond=mid-1;
          }
          
      }
      cout<<ans<<endl;
  }

    return 0;
}
