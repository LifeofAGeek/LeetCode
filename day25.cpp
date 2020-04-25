//greedy approach
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxjump=0;
        for(int i=0;i<=maxjump;i++){
            maxjump=max(maxjump,i+nums[i]);
            if(maxjump>=nums.size()-1) return true;
        }
        return false;
    }
};
