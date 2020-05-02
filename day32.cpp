//O(len(S)*len(J)) time and O(1) space

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int c=0;
        for(auto s:S)
        {
            for(auto j:J)
            {
                if(int(s)==int(j))  c++;
            }
        }
        return c;
    }
};
