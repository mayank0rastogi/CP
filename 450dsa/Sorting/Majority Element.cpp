class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
    //     int check=size/2;
    // unordered_map<int,int>mp;
    // for(int i=0;i<size;i++)
    // {
    //     mp[a[i]]++;
    // }
    
    // for(auto u:mp)
    // {
    //     if(u.second>check)
    //     {
    //       return u.first;
    //     }
    // }
    // return -1;
      //optimized approach  
        int ma=a[0];
        int count=1;
        for(int i=1;i<size;i++)
        {
            if(a[i]==ma)
            {
                count++;
            }
            else
            {
                count--;
            }
             if(ma==0)
             {
                 ma=a[i];
                 count=1;
             }
        }
        int cnt=0;
        for(int i=0;i<size;i++)
        {
            if(a[i]==ma)
            {
                cnt++;
            }
        }
            if(cnt>size/2)
            {
                return ma;
            }
            else
            {
                return -1;
            }
      
       
        // your code here
        
    }
};
