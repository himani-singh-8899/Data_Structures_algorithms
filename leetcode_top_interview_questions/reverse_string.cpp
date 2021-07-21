/*Write a function that reverses a string. The input string is given as an array of characters s.

 

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]*/
class Solution {
public:
    void reverseString(vector<char>& s) {
       int low=0; int high=s.size()-1;
        while(low<high)
        {
                swap(s[low],s[high]);
               low++;
              high--;
        }
    }
};
