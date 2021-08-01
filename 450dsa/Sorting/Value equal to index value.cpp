class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	    vector<int>vis;
	    
	    for(int i=1;i<n;i++)
	    {
	        if(arr[i]=i)
	        {
	            vis.push_back(arr[i]);
	        }
	    }
	    return vis;
	}
};
