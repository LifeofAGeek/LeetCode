//greedy approach
class Solution {
public:
    bool checkValidString(string s) {
    int l = s.length() - 1;
    int openCount = 0, closedCount = 0;
    if(s[0]==')') return false; //always invalid eg.. ")()"
    for (int i = 0; i <= l; i++)
    {
        if (s[i] == '*' || s[i] == '(') openCount++; //left to right traversing
        else openCount--;
        if (s[l - i] == '*' || s[l - i] == ')') closedCount++; //right to left traversing
        else closedCount--;
        if (openCount < 0 || closedCount < 0) return false; // ivalid string 
    }
    return true; // openCount or closedCount >=0 
    }
};

//famous two stack approach
classSolution {
public:
bool checkValidString(string s) {
      stack<int> open,ast;
      for(int i=0;i<s.length();i++)
      {
          if(s[i] == ')')
          {
              if(!open.empty()) open.pop();
              else if(!ast.empty()) ast.pop();
              else return false;
          }
          else if(s[i] == '(')   open.push(i);
          else ast.push(i);
      }
      while(!open.empty() && !ast.empty())
      {
         if(open.top() > ast.top()) return false;
         open.pop();
          ast.pop();
      }
        return open.empty();
    };
