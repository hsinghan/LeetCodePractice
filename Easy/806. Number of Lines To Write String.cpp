
class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
          int accumulation = 0, lineNumber = 1;
          
          if (S.empty()) return {0,0};
          
          for (auto s : S)
          {
              // ususally used technique, remenber 
              // to obtain the index of corresponding char for getting the value
              int char_width = widths[s - 'a'];
              lineNumber = (accumulation+char_width > 100 ? lineNumber+1 : lineNumber);
              // if accumulationgreater than 100, it will change to char_width; 
              // otherwise, keep cumalating accumulation
              accumulation = (accumulation+char_width > 100 ? char_width : accumulation+char_width);
          }

          return {lineNumber, accumulation};
    }
};
