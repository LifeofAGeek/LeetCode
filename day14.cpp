class Solution {
public:
void leftrotate(string &s, int d) 
{ 
    reverse(s.begin(), s.begin()+d); 
    reverse(s.begin()+d, s.end()); 
    reverse(s.begin(), s.end()); 
} 
  
void rightrotate(string &s, int d) 
{ 
    leftrotate(s, s.length()-d); 
} 

string stringShift(string s, vector<vector<int>> &shift)
{
    int len=s.size();
    int right = 0, left = 0, shft=0;
    for (int i = 0; i < shift.size(); i++)
    {
      if (shift[i][0] == 1) right += shift[i][1];
      if (shift[i][0] == 0) left+= shift[i][1];
    }
    if(right>left){
    shft=(right-left)%len;
    rightrotate(s,shft);
    }
    else
    {
    shft=(left-right)%len;
    leftrotate(s,shft);
    }
    return s;  
}
};
