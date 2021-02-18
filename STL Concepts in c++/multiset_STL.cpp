/******************************************************************************

multiset is similar to set it also conatins sorted order but allows duplicates

*******************************************************************************/
#include <bits/stdc++.h>
#include<functional>
using namespace std;

int main()
{
    /*
    multiset<int,std::greater<>>mulse {2,4,1,76,4,2,9,0};
    mulse.insert(123);
    for(const auto&i:mulse)
    {
        cout<<i<<endl;
    }
    */
    
    multiset<int,std::less<int>>mulse {2,4,1,76,4,2,9,0};
    
    multiset<int,std::greater<>>mulse1 {13,5,32,76,45,2,99,1000};
    
    
    
        for(const auto&q:mulse1)
        {
         mulse.insert(q);
        }
     
    for(const auto&i:mulse)
    {
        cout<<i<<endl;
    }
    

    return 0;
}
