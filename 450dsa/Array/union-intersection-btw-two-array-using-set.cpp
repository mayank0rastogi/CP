/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

void get_unions(int a[],int n,int b[],int m)
{
   set<int>s;
   for(int i=0;i<n;i++)
   {
       s.insert(a[i]);
   }
   
   for(int j=0;j<m;j++)
   {
       s.insert(b[j]);
   }
    
    cout<<"The Union of twp array is :"<<endl;
    
    for(auto itr=s.begin();itr!=s.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
}
int get_intersection(int a[],int n,int b[],int m)
{
    set<int>hs;
    for(int i=0;i<n;i++)
    {
        hs.insert(a[i]);
    }
    cout<<"\nThe Intersection of two array is :"<<endl;
    for(int j=0;j<m;j++)
    {
        if(hs.find(b[j])!= hs.end())
        {
            cout<<b[j]<<" ";
        }
    }
    
    cout<<endl;
    
}

int main()
{
    int a[]={7, 1, 5, 2, 3, 6};
    int b[]={3, 8, 6, 20, 7};
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    
    get_unions(a,n,b,m);
    get_intersection(a,n,b,m);

    return 0;
}
