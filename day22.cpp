//O(n^2)

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0;
        long long int sum;
        for(int i=0;i<nums.size();i++)
        {
            sum=0;
            for(int j=i;j<nums.size();j++)
            {
                sum+=nums[j];
                if(sum==k) {
                    ans++;
                }
            }
        }
        return ans;
    }
};

//using hashmap - O(n)

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0, sum=0;
        map<int,int> freq;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum==k) ans++;
            if(freq[sum-k]) ans+=freq[sum-k];
            freq[sum]++;
        }
        return ans;
    }
};
