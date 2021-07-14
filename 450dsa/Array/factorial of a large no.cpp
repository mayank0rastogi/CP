#include<bits/stdc++.h>
using namespace std;
long long factorial(int N){
        // code here
        int fact=1;
        while(N)
        {
              fact=fact*N;
              N--;
            
        }
      

        return fact;
    }

    int main()
    {
    	long long N=10;
    	cout<<factorial(N)<<endl;
    }