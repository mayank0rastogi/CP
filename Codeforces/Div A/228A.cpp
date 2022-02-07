
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int s1,s2,s3,s4;
   set<int>horse_shoes;
   cin>>s1>>s2>>s3>>s4;
   horse_shoes.insert(s1);
   horse_shoes.insert(s2);
   horse_shoes.insert(s3);
   horse_shoes.insert(s4);
   if(horse_shoes.size()<4)
   {
       cout<<4-horse_shoes.size()<<endl;
   }
   else
   {
       cout<<0<<endl;
   }
   

    return 0;
}
