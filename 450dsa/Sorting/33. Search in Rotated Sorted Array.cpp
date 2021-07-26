class Solution {
public:
    int search(vector<int>& nums, int target) {
      int ret=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                ret=i;
                break;
            }

        }
        return ret;
    }
};
