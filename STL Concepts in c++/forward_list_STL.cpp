/******************************************************************************

forward_list in c++

*******************************************************************************/
#include <bits/stdc++.h>
#include<forward_list>
using namespace std;

int main()
{
    forward_list<int> list1 {1,4,3,4,5};
    forward_list<int> list2 {6,7,8,9,6};
    
    //list1.unique();//unique will remove its inly adjacent duplicate element
    //list1.remove(4);
    //list1.resize(3);//means delte after 3rd index
    list1.remove_if([] (int n){
        return n>4;//removes all no greater than 4 or any no you pass
    });
    /*
    list1.reverse();
    list1.sort();
    list2.sort();
    list1.merge(list2);
    */
    //list1.splice_after(list1.begin(),list2);
   // list1.insert_after(list1.begin(),8);
   
    for(auto&elm:list1)
    {
        cout<<elm<<endl;
    }
    /*
    cout<<"The size of list2 "<<std::distance(list1.begin(),list1.end())<<endl;
*/
/*
auto it=list2.begin();
it++;
list1.splice_after(list1.begin(),list2,it,list2.end());

    for(auto&elm:list1)
    {
        cout<<elm<<endl;
    }
    */
    return 0;
}
