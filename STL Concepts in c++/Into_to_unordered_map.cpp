/******************************************************************************

hashmap

*******************************************************************************/
#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<string,int>mp;
    //insert key and value
    pair<string,int>p("abc",1);
    mp.insert(p);
    //another way of inserting the element
    mp["xyz"]=2;
    
    //for accesing the element
    std::cout << mp["abc"] << std::endl;
    cout<<"size "<<mp.size()<<endl;
    cout<<mp.at("xyz")<<endl;
    //if value not exits than throws an error
    //cout<<mp.at("xya")<<endl;
    //if value not exits than but this 
    //using [] bracket and without using at it sets the default value as 0 automatticalyy
    cout<<mp["xya"]<<endl;
    cout<<"size "<<mp.size()<<endl;
    //check presence
    if(mp.count("xya")>0)
    {
        cout<<"ghi is present"<<endl;
    }
    
    mp.erase("xya");
    
    cout<<"size "<<mp.size()<<endl;
    //check presence
    if(mp.count("xya")>0)
    {
        cout<<"ghi is present"<<endl;
    }
    else
    {
      cout<<"ghi is not  present"<<endl;
    }

    return 0;
}
