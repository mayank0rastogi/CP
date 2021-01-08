#include<bits/stdc++.h>
#ifndef ONLINE_JUDGE
#define freopen freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#else
#define freopen //comment
#endif
using namespace std;
int main()
{
   freopen
  cout<<"Enter the No of elements"<<endl;
   int n;
   cin>>n;

   int array[n];
   for(int i=0;i<n;i++)
   {
       cin>>array[i];

   }
   const int MAX =1e6;
   //second array for updating or tracking the repeatd elememt
   int id[MAX];
   for(int i=0;i<MAX;i++)
   {
       id[i]=-1;
   }
   //variable for checking the repeated elemnt
   int repeated = INT_MAX;

   for(int i=0;i<n;i++)
   {
       if(id[array[i]] != -1)
       {
           repeated = min(repeated,id[array[i]]);
       }
       else
       {
           id[array[i]]=i;
       }
   }
   if(repeated == INT_MAX)
   {
       cout<<"-1"<<endl;
   }
   else
   {
       cout<<repeated+1<<endl;
   }


   return 0;
}
