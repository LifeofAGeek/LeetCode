class Solution {
public:
    int kadanes(vector<int> a)
    {
        int n=a.size();
        int max_so_far = a[0]; 
        int curr_max = a[0];
        for (int i=1;i<n;i++) 
       { 
            curr_max = max(a[i], curr_max+a[i]); 
            max_so_far = max(max_so_far, curr_max); 
       } 
       return max_so_far;
    }
    
    
    int maxSubarraySumCircular(vector<int>& a) {
        int x,sum=0,y;
        x=kadanes(a);
        for(auto &x:a)
        {
            sum+=x;
            x*=-1;
        }
        y=kadanes(a); //inverse array 
        if(y+sum==0) return x;
        return max(x,y+sum);
    }
};
