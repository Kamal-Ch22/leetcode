class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n= nums.size();
        int l=0,r=n-1,mid;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]>=nums[l])
            {
                if(target<=nums[mid] and nums[l]<=target) r=mid-1;
                 else l=mid+1;
            }
            else
            {
                if(target<=nums[r] and nums[mid]<=target) l=mid+1;
                else r=mid-1;
            }
        }
       return -1; 
    }
};