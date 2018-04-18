class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<unordered_set<char>> dict  = {
            {'q', 'Q', 'w', 'W', 'e', 'E', 'r', 'R', 't', 'T', 'y', 'Y', 'u', 'U', 'i', 'I', 'o', 'O', 'p', 'P'},
            {'a', 'A', 's', 'S', 'd', 'D', 'f', 'F', 'g', 'G', 'h', 'H', 'j', 'J', 'k', 'K', 'l', 'L'},
            {'z', 'Z', 'x', 'X', 'c', 'C', 'v', 'V', 'b', 'B', 'n', 'N', 'm', 'M'}};

            vector<string> res;

            for(auto &word:words){
            
                // if a word can be found in one of row
                vector<bool> d(3, true);
                
                // check each char of a word wheather these chars stay in the same row or not.
                for (auto &ch:word)
                {
                    for(int i = 0; i < 3; ++i){
                    // if each char of a word can be found in the same row
                    // it will set ture
                    // if iterator point to the end, then it mean ch do not find in the row
                    if(d[i] && dict[i].find(ch) == dict[i].end())
                        d[i] = false;
                    }
                }

                if(d[0] || d[1] || d[2])
                    res.push_back(word);
            }

            return res;
    }
};

//NOTE: 
// Find value in range
// Returns an iterator to the first element in the range [first,last) that compares equal to val. 
// If no such element is found, the function returns last.
