// Given a string S and a character C, return an array of integers representing the shortest distance
// from the character C in the string.

// Example 1:

// Input: S = "loveleetcode", C = 'e'
// Output: [3, 2, 1, 0, 1, 0, 0, 1, 2, 2, 1, 0]
 

// Note:

// S string length is in [1, 10000].
// C is a single character, and guaranteed to be in string S.
// All letters in S and C are lowercase.


class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        int n = S.size();
        vector<int>res(n, n); // initialize the vector, and inital values are n.
        // just given a big enough number
        int pos = -n;
        
        // From the left side
        for(int i = 0; i < n; i++){
            // update the index of the char
            if(S[i] == C ) pos = i;
            // chenck the shortest distance
            res[i] = min(res[i], abs(i-pos));
        }
        
        // From the right side
        for(int i = n-1; i >= 0; i--){
            // update the index of the char
            if(S[i] == C) pos = i;
            // chenck the shortest distance
            res[i] = min(res[i], abs(i-pos));
        }
        
        return res;
    

    }
};
