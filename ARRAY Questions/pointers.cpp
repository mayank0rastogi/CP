#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={10,20,30};
    cout<<*arr<<endl;//prints single element of the array

        int *ptr=arr;
        for(int i=0;i<3;i++)
        {
           // cout<<*arr+i<<endl;//prontong continoue no
            cout<<*(arr+i)<<endl;
           // ptr++;
           //arr++//illegal
        }
    return 0;
}
