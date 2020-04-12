class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int>P;
        vector<int> ans;
        for(int i=1;i<=m;i++)
            P.push_back(i);
        for(int x:queries)
        {
            vector<int>::iterator it;
            it=find(P.begin(),P.end(),x);
            if(it!=P.end())
            {
                ans.push_back(it-P.begin());
                P.erase(it);
                P.insert(P.begin(),x);
            }
        }
        return ans;
    }
};
