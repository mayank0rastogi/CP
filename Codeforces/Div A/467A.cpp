
#include <bits/stdc++.h>
using namespace std;
       
int capacity,no_people,t,c=0;

int main()
{
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>no_people>>capacity;
        if(capacity-no_people>=2)// checking whether total (capacity of people) minus with pepople we have at ith room
        //because we need space of two people so compare with 2 that it should greater than or equal 2
        {
            c++;
        }
    }
    cout<<c<<endl;

    return 0;
}

