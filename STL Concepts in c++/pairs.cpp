/******************************************************************************

Pair in c++
basically pair provides the struct templates to store multiple hetrogeneous data intp a single structures
//map ,multimap,unordered_map,unordered_multimap can use pair to insert data into their structures

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

void print(std::pair<int,int>&obj){cout<<obj.first<<" "<<obj.second<<endl;}


int main()
{
    
pair<int,int>obj{10,30};
print(obj);

//another way
pair<int,int>obj1=std::make_pair(21,45);
print(obj1);

std::vector<std::pair<std::string,uint>>vectolis;
vectolis.push_back(make_pair("bhupi",231));
vectolis.push_back(make_pair("yye",21));
vectolis.push_back(std::pair<std::string,int>("noob",23));
vectolis.push_back(std::pair<std::string,int>("harry",451));
vectolis.push_back(make_pair("haiden",291));

for(auto&i:vectolis)
{
    cout<<i.first<<" "<<i.second<<endl;
}
    return 0;
}
