/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int,int>m;
        
        int count = 0;
        for(int i =0;i<n;i++)
       {
          int x=k-arr[i];
          //cout<<"value of x :"<<x<<endl;
          //check that the element is present or not in the map
          //if not increase the frequency
          if(m[x]==0)//m.find(x)==m.end()
          {
              m[arr[i]]++;
          }
          else//already present it means increase the count 
          {
              count+=m[x];
               //now update the current element in the map
              m[arr[i]]++;
          }
          
         
       }
        
        return count;
    }
int main()
{
int arr[]={1, 5, 7, 1};
int n=sizeof(arr)/sizeof(arr[0]);
int k=6;
cout<<getPairsCount(arr,n,k);


    return 0;
}
