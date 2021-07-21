#include<bits/stdc++.h>
using namespace std;


long long maxProduct(int arr[], int n) {
	    // code here
	    
	    long long max_product=arr[0];
	    long long minval=arr[0];
	    long long maxval=arr[0];
	   // int product=1;
	    for(long long i=1;i<n;i++)
	    {
	        
	        if(arr[i]<0)
	        {
	            swap(maxval,minval);
	        }
	        
	        maxval=max((long long)arr[i],maxval*arr[i]);//typecasting int array
	        minval=min((long long)arr[i],minval*arr[i]);
	        
	        //max [product of the array]
	        
	        max_product=max(max_product,maxval);
	        
	    }
	    return max_product;

	}

	int main()
	{
		int arr[]={3 ,12, 15 ,23, 33 ,-35 ,30, -40 ,-30,-30,-30,26,28};
		int n=sizeof(arr)/sizeof(arr[0]);

		cout<<maxProduct(arr,n)<<endl;
	}