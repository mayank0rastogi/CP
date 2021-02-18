/******************************************************************************
list in c++ is more optimizide features in doubly linked list

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

void showlist(list <int> g) 
{ 
    list<int>::iterator it; 
    for(it = g.begin(); it != g.end(); ++it) 
        cout << '\t' << *it; 
    cout <<endl; 
} 
int main()
{
    list<int> ls1={2,3,2,6,4};
    list<int> ls2 {9,1,5,2,8};
    
    
    
    list <int> list1, list2; 
  
  
    for (int i = 0; i < 10; ++i) 
    { 
        list1.push_back(i*2); 
        list2.push_front(i * 3); 
    } 
    
    ls1.sort();
    ls1.unique();//only remove adjacent same element so for this 
    //youb should use sort first so that after sorting it set as adjcent and successfully removes
   // list1.splice(list1.begin(),list2);
    
    

showlist(ls2);
showlist(ls1);
cout<<"You can Insert using keyboard using loop "<<endl;

showlist(list1);
showlist(list2);

/*
    cout << "\nlist1.front() : " << gqlist1.front(); 
    cout << "\nlist1.back() : " << gqlist1.back(); 
    */
  
    cout << "\nlist1.pop_front() : "; 
    list1.pop_front(); 
    showlist(list1); 
  
    cout << "\nlist2.pop_back() : "; 
    list2.pop_back(); 
    showlist(list2); 
  
    cout << "\nlist1.reverse() : "; 
    list1.reverse(); 
    showlist(list1); 
  



    return 0;
}
