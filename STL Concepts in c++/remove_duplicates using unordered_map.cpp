/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

std::vector<int> removeDuplicates(int* a,int size) \
{
    vector<int>output;
    unordered_map<int,bool>mp;//in this instead of using unordered_map if we use map that no seen takes time
    //logn and totall it will reach to nlogn
    for(int i=0;i<size;i++)
    {
        if(mp.count(a[i])>0)
        {
            continue;
        }
        else
        {
            mp[a[i]]=true;
            output.push_back(a[i]);
        }
    }
    return output;
}

int main()
{
    int a[]={1,2,4,6,2,7,4,9,0,2,5,6,2,3};
    int size=sizeof(a)/sizeof(a[0]);
    vector<int>output=removeDuplicates(a,size);
    for(int i=0;i<output.size();i++)
    {
     cout<<output[i]<<endl;
    }

    return 0;
}
