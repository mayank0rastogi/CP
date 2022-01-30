#include <bits/stdc++.h>
using namespace std;

int main() {
    int no_stocks,cost_of_stock,sell_at_stocks;
    
    int t;
    cin>>t;
    while(t--)
    {
        cin>>no_stocks>>cost_of_stock>>sell_at_stocks;
        
        int total_spent=no_stocks*cost_of_stock;
        int total_sell=no_stocks*sell_at_stocks;
        int final_=total_sell-total_spent;
        cout<<final_<<endl;
    }
	// your code goes here
	return 0;
}
