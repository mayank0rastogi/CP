// There Are two cases manly in This
// Case 1: The item is included in the optimal subset.
// Case 2: The item is not included in the optimal set.

#include<bits/stdc++.h>
using namespace std;
int knapsack(int wt[],int val[],int W,int n)
{
    //base conditon 
    if(n==0 || W==0)
    {
        return 0;
    }
    
    if(wt[n-1]>W)
    {
        //Case2
        // in this case we can't put it in the bag
        return knapsack(wt,val,W,n-1);
        
    }
    else 
    {
        //Case1
        // int this case you have recursively call and choose whether in last element if we recursively call and add value to it or not
        return max(val[n-1]+knapsack(wt,val,W-wt[n-1],n-1),knapsack(wt,val,W,n-1));
    }
}

int main()
{
    int wt[] = { 10, 20, 30 };
    int val[] = { 60, 100, 120 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    cout << knapsack(wt,val,W, n);
    
}
