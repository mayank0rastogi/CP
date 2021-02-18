/******************************************************************************

multipmap in c++

lookup functions: count(),find();contains(),equal_range(),lower_bound();upper_bound()
we don't have at(),[] as in map

*******************************************************************************/
#include <bits/stdc++.h>
#include<functional>
#include<map>
using namespace std;



int main()
{
   
   multimap<int,char>mump;
   mump.insert(pair<int,char>(1,'q'));//instead of pair you can write it as 
   mump.insert(make_pair(2,'w'));
   mump.insert(make_pair(1,'x'));
   mump.insert(make_pair(3,'y'));mump.insert(make_pair(1,'r'));
   mump.insert(make_pair(2,'z'));
   mump.insert(make_pair(3,'p'));
   /*
   //itearte over the ,multimap
   for(auto&i:mump)
   {
       cout<<i.first <<" "<<i.second<<endl;
   }

   cout<<endl;
    
    //to get all pairs of a  particular key 
    //auto range=mump.equal_range(3);//after auto instead of range any variable will be there
    
    //equal range basically work on two iterators pointing strting indexing to last index
    pair<multimap<int,char>::iterator,multimap<int,char>::iterator> range=mump.equal_range(3);
    for(auto it=range.first;it!=range.second;++it)
    {
        cout<<it->first<<' '<<it->second<<endl;
    }
    
    cout<<endl;
    */
    //cout<<"testing the count function "<<mump.count(2);
    
    //cout<<endl;
    
    //cout<<"testing the contains functionit returns true or false that means exist or not "<<mump.contains(2);
   //auto pair=mump.find(1);
   //cout<<pair->first<<" "<<pair->second<<endl;
   
    auto pair=mump.lower_bound(1);
    cout<<pair->first<<" "<<pair->second<<endl;
    
    auto range=mump.upper_bound(1);
    cout<<range->first<<" "<<range->second<<endl;
    
     return 0;
}
