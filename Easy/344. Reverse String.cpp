class Solution {
public:
    string reverseString(string s) {
        // -1 是因為string 最後一個字元是'/0'
        for(int i = 0, j = s.length()-1; i<=j; i++,j--){
            swap(s[i],s[j]);
        }
        
        return s;
    }
};
