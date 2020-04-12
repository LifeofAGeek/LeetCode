class Solution {
public:
    static bool comp(string a, string b) {
        return a.size() < b.size();
    }
    vector<string> stringMatching(vector<string>& words) {
        set<string> res;
        vector<string> ans;
        int n = words.size();
        sort(words.begin(), words.end(), comp);
        for(int i=0; i<n-1; i++) {
            string needle = words[i];
            for (int j=i+1; j<n; j++) {
                string bush = words[j];
                int found = bush.find(needle); 
                if (found != string::npos) {
                    res.insert(needle);
                } 
            }
        }
        for (auto it = res.begin(); it != res.end(); it++) {
            ans.push_back(*it);
        }
        return ans;
    }
};
