
#include <iostream>
using namespace std;
int main()
{
    int withdraw;
    float balance;
    cin>>withdraw;
    cin>>balance;
    if ((withdraw%5==0)&&(balance>(withdraw+0.50)))
    {
    cout <<(balance-withdraw-0.50);
    }
    else
    {
    cout<<balance;
    }
}

