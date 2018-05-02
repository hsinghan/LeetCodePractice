// Given a non-empty array of integers, every element appears twice except for one. Find that single one.

// Note:

// Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

// Example 1:

// Input: [2,2,1]
// Output: 1
// Example 2:

// Input: [4,1,2,1,2]
// Output: 4


// The main is XOR operation
// 1010 ^ 1100 = 0110
// The same input bit output 0, and the different input bit output 1.


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int non_repeat_number = nums[0];
        for(int i = 1; i < nums.size(); i++){
            non_repeat_number = non_repeat_number ^ nums[i];
        }
        return non_repeat_number;
        
        
    }
};
