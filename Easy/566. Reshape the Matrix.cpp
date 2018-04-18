// In MATLAB, there is a very useful function called 'reshape', 
// which can reshape a matrix into a new one with different size but keep its original data.

// You're given a matrix represented by a two-dimensional array, 
// and two positive integers r and c 
// representing the row number and column number of the wanted reshaped matrix, respectively.

// The reshaped matrix need to be filled with all the elements of the original matrix 
// in the same row-traversing order as they were.

// If the 'reshape' operation with given parameters is possible and legal, output the new reshaped matrix;
// Otherwise, output the original matrix.

// Example 1:
// Input: 
// nums = 
// [[1,2],
//  [3,4]]
// r = 1, c = 4
// Output: 
// [[1,2,3,4]]
// Explanation:
// The row-traversing of nums is [1,2,3,4]. The new reshaped matrix is a 1 * 4 matrix, 
// fill it row by row by using the previous list.
// Example 2:
// Input: 
// nums = 
// [[1,2],
//  [3,4]]
// r = 2, c = 4
// Output: 
// [[1,2],
//  [3,4]]
// Explanation:
// There is no way to reshape a 2 * 2 matrix to a 2 * 4 matrix. So output the original matrix.

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        
        int m = nums.size(), n = nums[0].size();
        int element_count = (m * n);
        vector<vector<int>> res(r, vector<int>(c, 0));
        
        if (element_count == (r*c) )
        {
            // k is used to point out the location of res where need to fill in the number of nums now.
            for(int i = 0, k = 0; i < m ; i++){
                for(int j = 0; j < n; j++, k++){
                    res[k/c][k%c] = nums[i][j];
                }
            }

        }
        else
            return nums;
        
        return res;
    }
};
