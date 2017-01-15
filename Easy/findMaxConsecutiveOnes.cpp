// Example 1:
// Input: [1,1,0,1,1,1]
// Output: 3
// Explanation: The first two digits or the last three digits are consecutive 1s.
//     The maximum number of consecutive 1s is 3.
// Note:
// The input array will only contain 0 and 1.
// The length of input array is a positive integer and will not exceed 10,000
// 
// Question: Given a binary array, find the maximun number of consecutive 1s in the array.
#include <iostream>
#include "vector"
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, max = 0;

        for (int i = 0; i < nums.size(); ++i){
            if (nums[i] == 1){
            	//count先加1在與max比
            	//count > max ,aasign the value of count to max;
            	//count 不變
                if (++count > max) {
                    max = count;
                }
            }
            else {
                count = 0;
            }
        }
        return max;
    }
};
