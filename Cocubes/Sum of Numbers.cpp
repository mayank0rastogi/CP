/*
Problem
Given an array of N elements, check if it is possible to obtain a sum of S, by choosing some (or none) elements of the array and adding them.

Input:
First line of the input contains number of test cases T. Each test case has three lines.
First line has N, the number of elements in array.
Second line contains N space separated integers denoting the elements of the array.
Third line contains a single integer denoting S.

Output:
For each test case, print "YES" if S can be obtained by choosing some(or none) elements of the array and adding them. Otherwise Print "NO".

Note that 0 can always be obtained by choosing none.

Constraints
1 ≤ T ≤10
1 ≤ N ≤ 15
-10^6 ≤ A[i] ≤ 10^6 for 0 ≤ i < N

Sample Input
3
5
3 2 0 7 -1
8
3
-1 3 3
4
3
4 -5 1
5
Sample Output
YES
NO
YES

*/
#include<bits/stdc++.h>

#define ll long long


 

using namespace std;


 

int main() {

    ll t,n,i,j,s;

    cin>>t;

    while(t--)

    {

    ll val,sum=0;

    vector<ll> v;

    cin>>n;

    for(ll p=0;p<n;p++)

    {

        cin>>s;

        v.push_back(s);

    }

    cin>>val;

    for(i=0;i<=(1<<n);i++)

    {

        sum=0;

        for(j=0;j<n;j++)

        {

            if(i&(1<<j))

            {

                sum+=v[j];

            }

        }

        if(sum==val)

        {

        cout<<"YES"<<endl;

        break;

        }

    }

    if(i==(1<<n)+1)

    cout<<"NO"<<endl;

    }


 

}
