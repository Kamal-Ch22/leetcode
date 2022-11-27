class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;
         sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            if(i==0 or (i>0 and nums[i]!=nums[i-1]))
            {
            int target=0-nums[i];
            int left=i+1,right=nums.size()-1;
            while(left<right)
            {
               
                if(nums[left]+nums[right]==target)
                {
                     vector<int> ans;
                    ans.push_back(nums[i]);
                    ans.push_back(nums[left]);
                    ans.push_back(nums[right]);
                    v.push_back(ans);
                    while(left<right and nums[left]==nums[left+1]) left++;
                     while(left<right and nums[right]==nums[right-1]) right--;
                    left++;right--;
                }
            
                else if(nums[left]+nums[right]<target) left++;
                else right--;
            }
            }
        }  
        
        return v;
    }
      
};