class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> table;
        for(string s : strs){
            string temp=s;
            sort(temp.begin(),temp.end());
            table[temp].push_back(s);
        }
        vector<vector<string>> v;
        for(auto ele:table)
        {
            v.push_back(ele.second);
        }
        return v;
    }
};
