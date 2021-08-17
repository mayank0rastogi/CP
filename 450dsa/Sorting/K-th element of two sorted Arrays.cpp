//Two pointer approach which helps me to solve the problem in O(K)
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int i=0,j=0,x=0;
        while(i<n && j<m)
        {
            if(arr1[i]<arr2[j])
            {
                x++;
                if(x==k)
                {
                    return arr1[i];
                }
                i++;
            }
             else
            {
                x++;
                if(x==k)
                {
                    return arr2[j];
                }
                j++;
            }
            
        }
      
      //condtion  to handle the exception when one of the array's element is finished and one is remaining so,
      //i need to traverse the remaining element whether our k is in tis remaining elmenet of the array or not
        while(i<n)
        {
            x++;
                if(x==k)
                {
                    return arr1[i];
                }
                i++;
        }
        
        while(j<m)
        {
             x++;
                if(x==k)
                {
                    return arr2[j];
                }
                j++;
            
        }
        
    }
};

// { Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}  // } Driver Code Ends
