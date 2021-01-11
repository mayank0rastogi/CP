//largest word in a string
#include<bits/stdc++.h>
#include<string>
using namespace std;
 int main()
 {
     //largest word in a no.
     int n;
         cin>>n;
     cin.ignore();
     char a[n+1];

     //getline for inputing the senetnce
   cin.getline(a,n);
   cin.ignore();//to clear the buffer
     int i=0;
int currlength=0,max_length=0;
int st=0,maxst=0;
     while(1)
     {
         if(a[i]==' ' || a[i]=='\0')
         {

             if(currlength>max_length)
             {

                 max_length=currlength;
                 maxst=st;
             }
             currlength=0;
             st=st+1;
         }
         else{//when no space the increase


         currlength++;
         if(a[i]=='\0')
            break;
            i++;
         }
     }
     cout<<max_length<<endl;
     //printing the largest word
     for(int i=0;i<max_length;i++)
        cout<<a[i+maxst];

     return 0;
 }
