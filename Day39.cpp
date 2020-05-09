class Solution {
public:
    bool isPerfectSquare(int num) {
        for(int i=1;num>0;i+=2) //perfect sq. is sum of odd numbers starting from 1
        {
            num-=i; 
            if(num==0) return true; //if num reaches zero i.e, perfect sq.
        }
        return false; //not a perfect sq. i.e, num<0
    }
};
