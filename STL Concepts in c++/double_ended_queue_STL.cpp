/******************************************************************************
dequeue in c++

*******************************************************************************/
#include <bits/stdc++.h>
#include<deque>
using namespace std;

void print(const std::deque<int>& dqu) {for (int num : dqu) cout<<num<<" ";cout<<endl;}
int main()
{
   std::deque<int>dqu={9,7,5,6};
   dqu.push_front(2);
   print(dqu);
   dqu.push_back(3);
   print(dqu);
   
   //std::deque<int>dqu={9,7,5,6};
   dqu.pop_front();
   print(dqu);
   dqu.pop_back();
   print(dqu);
   

    return 0;
}
