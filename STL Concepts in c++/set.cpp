/******************************************************************************

Set in c++ is an associative container that contins a sorted set of unique objects of type key
//usually implemented as red black tree
//if we want to use userdefined datatype in set than we have to provide compare
function so that set can store them in sorted manner

//we can pass the order of sorting while constructing set objects

/*it can store unique elements and they are stored in sorted (A/D)Default sorting order is ascending*/
  
//syntax; std::set<T> ;//type is any datatype
/********************************************************************************/
#include <bits/stdc++.h>
#include<set>
#include<functional>
using namespace std;
class Employee
{
    public:
    int age;
    string name;
    ///comparatr function user userdefined is we don't use greater inside the set than by 
    //defualt it takes as an ascending order to see uncomment this and see 
    //bool operator <(const Employee& rhs) const{return age<rhs.age;}
    bool operator >(const Employee& rhs) const{return age>rhs.age;}
};
int main()
{
    
    
    /*
    set<int>Set {3,4,5,1,2,6,7,8,3,4,5};
    */
    //use less instead of greater
    set<Employee,std::greater<Employee>> Set {{32,"rupa"},{21,"rtud"},{43,"jwnu"},{12,"jbd"}};
    for(const auto& e: Set)

    {
        cout<<e.age<<" "<<e.name<<endl;
    }    

    return 0;
}

