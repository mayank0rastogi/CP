/******************************************************************************

Map in c++
syntax: std::map<Key, T> obj;
//associative container that store data in key and value combinations
stores key value pair in sorted order
used generally in dictionary type problems
key sholud be unique
implement using self balancng binary tree (AVL/red black tree)

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    map<int,string,std::greater<>>mp;//by default its order of printing is ascending after put down greater its increases
    mp[1012283]="nbddiqj";
    mp[1080383]="nwksmlqj";
    //manual insertion using .insert()
    mp.insert(make_pair(820028233,"bvwyioqp"));
    
    //access through loop
    for(auto&i:mp)
    {
        cout<<"id: "<<i.first<<" "<<"name: "<<i.second<<endl;
    }
    
    //access using []operator
    cout<<mp[1080383]<<endl;*/
    
    map<int,vector<string>,std::greater<>>mp;//one id has multiple names
    mp[1012283].push_back("anuj");
    mp[1080383].push_back("shivam");
    mp[1012283].push_back("swati");
    mp[1012283].push_back("shyna");
    mp[1080383].push_back("myra");
    mp[1012283].push_back("akanksha");
    mp[1080383].push_back("nandni");
    mp[1012283].push_back("shemoir");
    mp[1080383].push_back("natasha");
    //manual insertion using .insert()
   // mp.insert(make_pair(820028233,"bvwyioqp"));
    
    //access through loop
    for(auto&i:mp)
    {
        for(auto&j:i.second)
        {
            cout<<"id: "<<i.first<<" "<<"name: "<<j<<endl;
            //here i.second has a seprate loop bcoz it contins multiple values in a single index
        }
    }
    
    cout<<"Ar you can type it as that First print iad and its belonging list  ------------------->"<<endl;
    for(auto&i:mp)
    {
        cout<<"id: "<<i.first<<endl;
        
        for(auto&j:i.second)
        {
            cout<<"name: "<<j<<"  ";
            //here i.second has a seprate loop bcoz it contins multiple values in a single index
        }
        cout<<endl;
    }
    //access using []operator
   // cout<<mp[1080383]<<endl;
   

    return 0;
}
