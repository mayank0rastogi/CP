/******************************************************************************

Vectors in c++ is combination of linked list + array
accessing
data()
returns pointer of that array present inside the vector class
modifiers
push_back(),emplace(),insert(),emplace_back(),po_back(),resize(),swap(),erase(),clear()

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
   std::vector<int> arr1;
   std::vector<int> arr2={1,2,3,4,5};
   std::vector<int> arr3 {1,2,3,4,5};
   //acessing elements
   arr2.at(3)=10;
   arr2[3]=13;
*/
  std::vector<int>vec ;
  //vec.reserve(1000);
  vec.reserve(32);
  //if capacity is less than running arrya than it doubles the array at the last capacity
    for (int i=0;i<33;++i) 
    {
        vec.push_back(i);
        cout<<"Size "<<vec.size()<<" Capacity "<<vec.capacity()<<endl;
    }
        return 0;
}

//optimized way to use vectors in c++