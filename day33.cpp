class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> s1; //make dict for ransomNote
        unordered_map<char,int> s2; //make dict for magazine
        bool flag=false;
        if(ransomNote=="") return true;
        for(int i=0;i<ransomNote.length();i++) s1[ransomNote[i]]+=1; //add key,val
        for(int i=0;i<magazine.length();i++) s2[magazine[i]]+=1; 
        for(auto it=s1.begin();it!=s1.end();++it)
        {
            if(s2[it->first]<it->second) return false; // O(n) time 
        }
        return true;
    }
};
