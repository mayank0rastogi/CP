
#include<bits/stdc++.h> 
using namespace std; 

class Solution
{   
public:
    int maximumSumSubarray(int K, vector<int> &Arr , int N)
    {
          int i=0,j=0;
          int sum=0;
          int mx=INT_MIN;
          //runn until end pointer that is j is less than size of arr
          while (j<N)
          {
            sum=sum+Arr[j]; // do calculation to reduce time complexity
            if (j-i+1<K) 
            {
                j++; // increament j upto when the size of the size of window is not equal to required size i.e K
            }
            else if ((j-i+1)==K) // when sindow size hit to the required window size 
            {
              mx=max(mx,sum); // selecting max ans from the subarray sum
              sum=sum-Arr[i]; // start removing from the first
              i++;
              j++;
            }
          }
        
        return mx;
    }
    
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
}  
