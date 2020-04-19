class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lb=0, ub=nums.size()-1; //lower and upper bound
        
        while(ub>=lb){
            
            int mid = lb + (ub - lb)/2;
            
            if(nums[mid]==target) return mid; //found at mid
            
            if(nums[mid]>=nums[lb]) //sorted subarray
            {
                if(target<=nums[mid] && target>=nums[lb]) ub=mid-1;
                else lb=mid+1;
            }
            else //pivot check
            {
                if(target>nums[mid] && target<=nums[ub]) lb=mid+1; //another sorted subarray
                else ub=mid-1;
            }
        }
        return -1; //not found
    }
};
