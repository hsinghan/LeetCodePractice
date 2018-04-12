// Example:
// Input: words = ["gin", "zen", "gig", "msg"]
// Output: 2

// Explanation: 
// The transformation of each word is:
// "gin" -> "--...-."
// "zen" -> "--...-."
// "gig" -> "--...--."
// "msg" -> "--...--."

// There are 2 different transformations, "--...-." and "--...--.".


class Solution
{
public:
	int uniqueMorseRepresentations(vector<string>& words){
    // The gived string
		vector<string> d = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
		unordered_set<string> s; 
		for (auto word:words)
		{
			string code = " ";
			for (auto c:word)
			{
				code += d[c-'a'];
           // This means to get the index of any alphabet in the morse dictionary, 
           // you need to get the difference/offset of the alphabet from ‘a’. 
           // Hence we do c-‘a’ to get the index in the morse dictionary/array. 
           // This is a very common way to get the index of characters stored in an array.
        
			}

			// concatenate the char to s
			s.insert(code);
		}
		// the duplicate element will not be count
		return s.size();
	}

};
