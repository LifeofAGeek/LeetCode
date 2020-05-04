class Solution {
public:
    int findComplement(int num) {
        int len=log2(num)+1; //length of number i.e, say 5 -> 0101 -> 3(0->1->2->3) 
        int c=pow(2,len)-1; // 8 = 1000, 8-1=7 -> 0111
        return (num xor c); // 5 xor 7 -> 101 ^ 111 -> 10 
    }
};
