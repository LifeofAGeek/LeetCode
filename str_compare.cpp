class Solution {
public:
    bool backspaceCompare(string S, string T) {
        vector<char> str1, str2;
        for(auto x:S)
        {
            if(x!='#')
                str1.push_back(x);
            else{
                if(str1.size()) str1.pop_back();
            }
        }
        for(auto x:T)
        {
            if(x!='#')
                str2.push_back(x);
            else{
                if(str2.size()) str2.pop_back();
            }
        }
        return (str1==str2);
    }
};
