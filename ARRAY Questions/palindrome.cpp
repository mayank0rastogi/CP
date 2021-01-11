#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int n;
     cin>>n;
     char a[n+1];
     cin>>a;

    bool check=1;

     for(int i=0;i<n;i++)
     {
         if(a[i]!= a[n-1-i])
         {
             check =0;
             break;
         }
     }
        if(check == true)
        {

            cout<<"The word is a plindrome word"<<endl;

        }
        else{
            cout<<"the word is not a palindrome word"<<endl;
        }
     return 0;
 }
