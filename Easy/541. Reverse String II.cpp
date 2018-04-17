// Given a string and an integer k, you need to reverse the first k characters 
// for every 2k characters counting from the start of the string. 
// If there are less than k characters left, reverse all of them. 
// If there are less than 2k but greater than or equal to k characters, 
// then reverse the first k characters and left the other as original.

// Example:
// Input: s = "abcdefg", k = 2
// Output: "bacdfeg"
// Restrictions:
// The string consists of lower English letters only.
// Length of the given string and k will in the range [1, 10000]

/**
* 0            k           2k          3k
* |-----------|-----------|-----------|---
* +--reverse--+           +--reverse--+
*/

class Solution {
public:
    string reverseStr(string s, int k) {

        if(s.empty()) return "Empty String";
        
        // sp : start point
        for (int sp = 0; sp < s.length(); sp += 2*k)
          {
            // min is used to assure that j will not accees the overflow position
            for (int i = sp, j = min(sp+k-1, int(s.length())-1); i < j; i++, j--)
            {
              swap(s[i],s[j]);
            }
          }
        
        return s;
    }
};
