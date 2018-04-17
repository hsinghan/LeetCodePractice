// Given a string, you need to reverse the order of characters in each word within a sentence
// while still preserving whitespace and initial word order.

// Example 1:
// Input: "Let's take LeetCode contest"
// Output: "s'teL ekat edoCteeL tsetnoc"
// Note: In the string, each word is separated by single space and there will not be any extra space in the string.

class Solution {
public:
    string reverseWords(string s) {
        
        int left = 0;
        for (int i = 0; i <= s.length(); i++)
        {
          
          if(s[i] == ' '  || i == s.length() ){
            // back to word, not the space
            int j = i-1;
            for (int k = left; k < j ; k++, j--)
            {
              swap(s[k], s[j]);
            }
            left = i+1;
          }

        }


        return s;
    }
};


// NOTE: It can also use the reverse function to do it
// The other people's method
class Solution {
public:
    string reverseWords(string s) {
        size_t front = 0;
        for(int i = 0; i <= s.length(); ++i){
            if(i == s.length() || s[i] == ' '){
                reverse(&s[front], &s[i]);
                front = i + 1;
            }
        }
        
        return s;
    }
};
