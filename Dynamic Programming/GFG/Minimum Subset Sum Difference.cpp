#include<bits/stdc++.h>
using namespace std;
vector<int> subset_sum(int arr[],int s,int n,vector<vector<int>>dp)
{
  
  for(int i=0;i<n+1;i++)
  {
      for(int j=0;j<s+1;j++)
      {
          if (i==0)
          {
              dp[i][j]=0;
          }
          if(j==0)
          {
              dp[i][j]=1;
          }
      }
  }
  
  
  for(int i=1;i<n+1;i++)
  {
      for(int j=1;j<s+1;j++)
      {
          if(arr[i-1]<=j)
          {
              dp[i][j]= (dp[i-1][j-arr[i-1]] || dp[i-1][j]);
          }
          
          else
          {
              dp[i][j]=dp[i-1][j];
          }
      }
  }
 // below 38 to 45 indicates that how dp matrix fill 
// for(int i=0;i<n+1;i++)
//   {
//       for(int j=0;j<s+1;j++)
//       {
//           cout<<dp[i][j]<<" ";
//       }
//       cout<<endl;
//   }

//just to see the value of range which is also sum 
// int c=s/2;
// cout<<"Value of c "<<c;
vector<int>idx(s/2);
      for(int j=0;j<=s/2;j++)
      {
        //   cout<<"Hello";
          
          if(dp[n][j]==1)
          {
            //   cout<<j<<" ";
              idx.push_back(j);
          }
      }
  
  
  return idx;
}

int minimum_Subset_Sum_Difference(int arr[],int n)
{
    int range=0;
 for(int i=0;i<n;i++)
 {
     range+=arr[i];
 }
 
 // you can choose any type of dp 2D array both behaves same 
//  vector<vector<bool>> dp(n+1,vector<bool>(range+1,false));
 vector<vector<int>> dp(n+1,vector<int>(range+1,0));
 vector<int>valid_set_of_range=subset_sum(arr,range,n,dp);
 
//  for(int i=0;i<valid_set_of_range.size();i++)
//  {
//      cout<<valid_set_of_range[i]<<" ";
     
//  }
 
 int mn=INT_MAX;
 
 for(int i=0;i<valid_set_of_range.size();i++)
 {
     //all logic is to understand this below 90th line intution i,e, range-2*valid_set_of_range[i]
     //which basically means (range of complete array)-2*s1
     // where s1 is our valid set range which helps subset to minimize the minimum_Subset_Sum_Difference
     
     // suppose we have divide the array into two subset equally i.e, s1 and s2
     // now suppose s2 is greater sum or s1 is greater sum any one base on this 
     // we say s2-s1---eq(1) or 
     //        s1-s2---eq(2)
     // now we can replace s2 or s1 with s2=range-s1<--->eq(3) or s1=range-s2<---->eq(4)
     // if we s2 into eq(1) or s1 into eq(2) respectively than,
     //eq(1) becomes range-s1-s1= range-2*s1 --eq(5)
     //eq(2) becomes range-s2-s2=range-2*s2  --eq(6)
     //as you can see any of the eq(5) or eq(6) solve our problem 
     // now take eq(5) as we see s1 is in between range(total of elments of array)
    //  but we also know there are not every possible ubset sum formed for s1 subset
    //  for this we use subset_sum problem to find the possible subsets for s1 and we conisder
    //  only half of range i.e, range/2 to find the s1
    //  and to find the valid subset sum we use subset rum problme to find it 
    //  and after finding it we put it into vector whihc is just half of the range and using this 
    //  we iterate and to that vector which contains possible subsets sum formed for s1 
    //  using this we find our min diiff using formula which we define in eq(5) or eq(6)
     
     
     mn=min(mn,range-2*valid_set_of_range[i]);
     
 }
 return mn;
    
}


int main()
{
    int arr[]={1, 2, 7};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    // vector<vector<bool>> dp(n+1,vector<bool>(s+1,false));
    cout<<minimum_Subset_Sum_Difference(arr,n)<<endl;
    return 0;
}
