/*Thinking Process:

1.Starting from left of array and keep adding elements to a variable sum
2. Add -1 for 0 and 1 for 1
3. Now, everytime sum becomes zero, we know all the elements from begining of array have been neutralized , meaning we have got equal number of ones and zeroes,
4. let this occurs at index i, so longestContArray = i+1 ('coz w're dealing with indices)
5. But we are not done yet!, consider the case : [1,1,0,1,1]
6. In this case sum will never become zero,
7. but there exists a subarray of length 2, having equal 0 & 1
8. let's see the value of sum at index : 1 and 3
9. Ohh!! sum = 2 for both indices
10. what does this mean???
11. This means that if we get the same sum value for two indices i and j, then all the elements within the range [i,j) or (i,j] have been neutralized
12. What datastructure can remember the sum and index
13. Ofcourse ! Map, so we use a map to store the sum and index values,
14. if sum == 0 then we have already solved the cases
15. but if sum!=0 and this sum doesn't already exist in the map,
16. then store it with it's corresponding index
17. but if sum !=0 and sum already exists in the map then,
18. dependig on whether i - m[sum] > LongestContArray, update LongestContArray
19. Note we need to store a unique sum value only once, after that whenever we encounter the same sum again our interval length is going to increase only and that is what we want
ex- [1,0,1,0,1] we get sum = 1 three times
we store sum = 1 for index = 0 only
and never update it as we want longest length
*/

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
       int sum=0;
       unordered_map<int,int> m;
       unsigned int longestContArray = 0;
       
        for(int i=0;i<nums.size();i++){
           sum += (nums[i]==0)?-1:1;
           
           auto it = m.find(sum);
           
           if(sum == 0){
              if(longestContArray < i+1)
               longestContArray = i+1;
           }
           else if(it != m.end()){
              if(longestContArray < i-it->second)
               longestContArray = i-it->second;
           }
           else if(it == m.end())
                m.insert({sum,i});
       }
        return longestContArray;
    }
};
