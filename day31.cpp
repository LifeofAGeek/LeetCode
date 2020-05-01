// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n,int left=1) {
        int mid=left+(n-left)/2;
        if(left<n){
        if(isBadVersion(mid)==false) return firstBadVersion(n,mid+1);
        else return firstBadVersion(mid,1);
        }
        return left;
    }
};
