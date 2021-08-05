class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
//         vector<int>v;
//         // sort(nums.begin(),nums.end());
//         for(int i =0;i<nums.size();i++)
//         {
//             if(nums[i]%2==0)
//             {
//                 v.push_back(nums[i]);
//             }
            
//         }
//         for(int i=0;i<nums.size();i++)
//         {
//             if(nums[i]%2==1)
//             {
//                 v.push_back(nums[i]);
//             }
//         }
//another approach
int i=0;
int j=nums.size()-1;
int even=0;//for storing index of odd element  
int odd=nums.size()-1;
while(i<=j)
{
        if(nums[i]%2==0)
        {
           i++;
        }
        else
        {
           even=i;
           //cout<<"inside else of even part"<<even<<endl;
        }
       
        if(nums[j]%2!=0)
        {
          j--;
        }
        else
        {
            odd=j;
            // cout<<"inside else of odd part"<<odd<<endl;
        }

        
    
//checking the condition using two pointers while if even no are already in their place and that means odd are also so we can't swap that values
        if(even==i && odd==j)
        {
            int temp=nums[even];
            nums[even]=nums[odd];
            nums[odd]=temp;
       }
}
return nums;
    // return v;   
    }
};
