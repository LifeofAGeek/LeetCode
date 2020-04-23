class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int count=0;
        while(m!=n) //until all bits of m and n are equal
        {
            m>>=1;
            n>>=1;
            count++; //counts number of zero's shifted
        }
        return m<<count; //final answere
    }
};
