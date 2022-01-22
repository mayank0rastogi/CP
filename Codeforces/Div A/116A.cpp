#include <bits/stdc++.h>
using namespace std;
int no;
// time ~ 60 ms
int main()
{
    cin>>no;
    int i,o,minpossible=0,total=0;
    while(no--)
    {
        cin>>o>>i;
        total=total-o;
        total=total+i;
        
        if(total>minpossible)
        {
            minpossible=total;
        }
    }
    cout<<minpossible<<endl;

    return 0;
}


//this approach takes time ~ 30ms
// cin>>no;
//     int in[no],out[no];
//     int total=0,minpossible=0;
//     for(int i=0;i<no;i++)
//     {
//         cin>>out[i]>>in[i];
//     }
    
//     for(int i=0;i<no;i++)
//     {
//         total+=in[i]-out[i];
        
//         if(minpossible<total)
//         {
//             minpossible=total;
//         }
//     }
//     cout<<minpossible<<endl;
