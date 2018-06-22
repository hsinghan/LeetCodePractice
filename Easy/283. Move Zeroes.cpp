Given an array nums, write a function to move all 0's to the end of it 
while maintaining the relative order of the non-zero elements.

Example:
Input: [0,1,0,3,12]
Output: [1,3,12,0,0]

Note:
You must do this in-place without making a copy of the array.
Minimize the total number of operations.

class Solution
{
public:
    void moveZeroes(vector<int>& nums){
        int j = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
            // move all the nonzero number to left
               nums[j] = nums[i];
               j++;
            }
        }

        // clear the remain elements and set to zero
        for (; j < nums.size(); j++)
        {
            nums[j] = 0;
        }

    }
};


class Solution
{
public:
    void moveZeroes(vector<int>& nums){
         int j = 0;
         
         // find the first nonzero element by using j
         while(j < nums.size() && nums[j] != 0)
         {
             j++;
         }

         for (int i = j; i < nums.size(); i++)
         {
              if (nums[i] != 0)
              {
                 // move the nonzero elements to left 
                 nums[j] = nums[i];
                 j++
                 // or nums[j++] = nums[i]
              }
         }

         while(j < nums.size())
         {
             nums[j] = 0;
         }
    
   }    
};
