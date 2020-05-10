class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> trustCount(N,0);
        for(int i=0;i<trust.size();i++)
        {
            trustCount[trust[i][0]-1]--;
            trustCount[trust[i][1]-1]++;
        }
        for(int i=0;i<N;i++)
        {
            if(trustCount[i]==N-1) return i+1;
        }
        return -1;
    }
};
