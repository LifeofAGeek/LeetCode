class Solution {
public:
    int countElements(vector<int>& arr) {
        unordered_set<int> s;
        int c=0;
        for(int e : arr)
        {
            s.insert(e);
        }
        for(int e:arr){
            if(s.find(e+1)!=e.end()) c++;
        }
        return c;
    }
};
