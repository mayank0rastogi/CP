#include<bits/stdc++.h>
using namespace std;
class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    long long count=0;
	    sort(arr,arr+n);
	    for(int i=0;i<n-2;i++)
	    {
	        
	        int j=i+1;
	        int k=n-1;
	        
	        while(j<k)
	        {
	            if(arr[i]+arr[j]+arr[k]<sum)
    	        {
    	            count+=(k-j);
    	            j++;
    	        }
    	        else
    	        {
    	            k--;
    	        }
	        
	        }
	        
	        
	      
	    }
	    return count;
	}
		 

};

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    long long sum;
    cin>>n>>sum;
    long long arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    
    Solution obj;
    cout<<obj.countTriplets(arr,n,sum);
    cout<<endl;
  }
    return 0;
}
