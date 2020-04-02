class Solution {
public:
    int squareSum(int num)
    {
    int sum= 0; 
    while (num > 0) 
    { 
        sum += pow((num%10),2); 
        num = num/10; 
    } 
    return sum;
    }
    
    bool isHappy(int n) {
    while (1) { 
        if (n == 1) 
            return true; 
        n = squareSum(n); 
        if (n == 4) 
            return false; 
    }
    return false; 
    }
};
