// Given a word, you need to judge whether the usage of capitals in it is right or not.

// We define the usage of capitals in a word to be right when one of the following cases holds:

// All letters in this word are capitals, like "USA".
// All letters in this word are not capitals, like "leetcode".
// Only the first letter in this word is capital if it has more than one letter, like "Google".
// Otherwise, we define that this word doesn't use capitals in a right way.

// Example 1:
// Input: "USA"
// Output: True

// Example 2:
// Input: "FlaG"
// Output: False
// Note: The input will be a non-empty word consisting of uppercase and lowercase latin letters.


class Solution{
public:
    bool detectCapitalUse(string word){
        int size = word.size(), count = 0;
        if(size <= 1) return true;

        for(int i = 1; i < size; i++){
            // if we meet lowercase letter
            if(word[i] >= 'a' && word[i] <= 'z')
                count += 1;
            else
                count += 2;
        }

        if(count == size-1)
            return true; 
            // In fact, as long as the second letter to last letter are all lowercase,
            // whether the first letter is upcase or lowercase, 
            // the word will satisfy the conition.
        
            // Example:
            // Abc
            // abc
        else if (count == 2*(size-1))
            // all upcas, e.g. ABC
            return word[0] >= 'A' && word[0] <= 'Z'; 
        else
            return false;

    }

};
