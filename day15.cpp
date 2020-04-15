class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans(size, 1);
        
        // product of the values to the left
        int curLeft = 1;
        for(int i = 0; i < size; i++){
            ans[i] = curLeft;
            curLeft *= nums[i];
        }
        
        // product of the values to the right
        int curRight = 1;
        for(int i = size-1; i >= 0; i--){
            ans[i] *= curRight;
            curRight *= nums[i];
        }
        
        return ans;
    }
};
