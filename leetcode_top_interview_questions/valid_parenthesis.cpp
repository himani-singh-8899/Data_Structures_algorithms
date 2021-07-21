/*Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false*/
      
      
class Solution {
public:
    bool isValid(string s) {
     stack<char>st;
      
      for(int i=0;i<s.length();i++)
      {
          if(s[i]=='{' || s[i]=='(' || s[i]=='[')
          {
                st.push(s[i]);
          }
          else{
            if (st.empty()==true) 
                return false;
            else if(matching(st.top(),s[i])==false)
                return false;
            else
                st.pop();
        }
      }
      return (st.empty()==true); 
    }
    bool matching(char a, char b)
    {
        return(a=='(' && b==')'||
              a=='{' && b=='}'||
              a=='[' && b==']');
    }
};
