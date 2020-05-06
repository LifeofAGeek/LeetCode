//This question was all about knowning Moore's Voting algorithm because it runs in linear time with cons. space complexity.
//It also can be done using hashMap, BST(AVL->O(nlogn)),DnC method.

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major=0,count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[major]==nums[i]) count++;
            else count--;
            
            if(count==0){ 
                count=1;
                major=i;
            }
        }
        return nums[major];
    }
};
