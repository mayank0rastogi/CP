/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int doUnion(int a[], int n, int b[], int m)  {
        //code here
        set<int>s;
        for(int i=0;i<n;i++)
        {
            s.insert(a[i]);
        }
        for(int j=0;j<m;j++)
        {
            s.insert(b[j]);
        }
        for(auto itr=s.begin();itr!=s.end();itr++)
        cout<<*itr<<" ";
     return s.size();   
    }
int main()
{
    int a[]={1, 2, 5, 6, 2, 3, 5, 7, 3};
    int b[]={2, 4, 5, 6, 8, 9, 4, 6, 5, 4};
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    doUnion(a,n,b,m);
    

    return 0;
}
