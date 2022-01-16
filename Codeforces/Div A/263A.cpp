//Problem Link : https://codeforces.com/problemset/problem/263/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>x;
            
            if(x==1)
            {
                cout<<abs(2-i)+abs(2-j)<<endl;
                return 0;
            }
        }
    }
}

// Python Solution :

// for i in range(5):
//     row=[int(x) for x in input().split()]
//     for j in range(5):
//         if row[j]==1:
//             print(abs(2-i)+abs(2-j))
//             exit
