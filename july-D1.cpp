class Solution {
public:
    int arrangeCoins(int n) {
        return (int)(sqrt(2*1L*n+0.25)-0.5);
    }
};
