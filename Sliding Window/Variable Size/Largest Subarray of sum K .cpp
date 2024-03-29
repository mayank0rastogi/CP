
#include <bits/stdc++.h>
using namespace std;



class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
       int sum=0;
       unordered_map<int,int> ump;
       
       int i=0,j=0,mx=0;   
       for(int i=0;i<N;i++)
       {
           sum += A[i];
           if(sum == K) 
           {
             mx = max(mx,i+1);
           }
           // make an entry for 'sum' if it is not present in ump
           if(ump.find(sum) == ump.end()) 
           {
               ump[sum] = i;       
           }
           // check if 'sum-k' is present in ump or not
           if(ump.find(sum - K) != ump.end()) 
           {
               mx = max(mx,i-ump[sum - K]);
           }
           
       }
       
       return mx;
    } 

};



int main() {

	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
} 

//For positive nos only

// class Solution{
//     public:
//     int lenOfLongSubarr(int A[],  int N, int K) 
//     { 
//        int sum=0;
      
//       int i=0,j=0;
//       int mx=0;
//     while(j<N)
//     {
//        sum=sum+A[j];
        
//         if(sum<K)
//         {
//             j++;
//         }
        
//         if(sum==K)
//         {
//             mx=max(mx,j-i+1);//j-i+1 the window size of the candidate which hits the the size of K
//             j++;
//         }
//         else if(sum>K)
//         {
//             while(sum>K)
//             {
//                 sum=sum-A[i];
//                 i++;
                
                
//             }
//             j++;
//         }
//     }
//   return mx;
// } 
