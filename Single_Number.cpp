class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i,x=nums[0];
        for(i=1;i<nums.size();i++)
        {
            x=x^nums[i];
        }
        return x;
    }
};
