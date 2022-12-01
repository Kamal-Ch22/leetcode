class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=n-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(mid>0 and mid<n-1)
            {
                if(nums[mid]>nums[mid-1] and nums[mid]>nums[mid+1]) return mid;
                if(nums[mid-1]>nums[mid])
                {
                    r=mid-1;
                }
                else if(nums[mid+1]>nums[mid]) l=mid+1;
            }
            if(mid==0 or mid==n-1)
            {
                if(nums[l]>nums[r]) return l;
                else return r;
            }
        }
        return 0;
    }
};